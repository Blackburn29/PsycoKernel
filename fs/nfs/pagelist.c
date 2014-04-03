/*
 * linux/fs/nfs/pagelist.c
 *
 * A set of helper functions for managing NFS read and write requests.
 * The main purpose of these routines is to provide support for the
 * coalescing of several requests into a single RPC call.
 *
 * Copyright 2000, 2001 (c) Trond Myklebust <trond.myklebust@fys.uio.no>
 *
 */

#include <linux/slab.h>
#include <linux/file.h>
#include <linux/sched.h>
#include <linux/sunrpc/clnt.h>
#include <linux/nfs.h>
#include <linux/nfs3.h>
#include <linux/nfs4.h>
#include <linux/nfs_page.h>
#include <linux/nfs_fs.h>
#include <linux/nfs_mount.h>
#include <linux/export.h>

#include "internal.h"
#include "pnfs.h"

static struct kmem_cache *nfs_page_cachep;

static inline struct nfs_page *
nfs_page_alloc(void)
{
	struct nfs_page	*p = kmem_cache_zalloc(nfs_page_cachep, GFP_KERNEL);
	if (p)
		INIT_LIST_HEAD(&p->wb_list);
	return p;
}

static inline void
nfs_page_free(struct nfs_page *p)
{
	kmem_cache_free(nfs_page_cachep, p);
}

struct nfs_page *
nfs_create_request(struct nfs_open_context *ctx, struct inode *inode,
		   struct page *page,
		   unsigned int offset, unsigned int count)
{
	struct nfs_page		*req;

	
	req = nfs_page_alloc();
	if (req == NULL)
		return ERR_PTR(-ENOMEM);

	
	req->wb_lock_context = nfs_get_lock_context(ctx);
	if (req->wb_lock_context == NULL) {
		nfs_page_free(req);
		return ERR_PTR(-ENOMEM);
	}

	req->wb_page    = page;
	atomic_set(&req->wb_complete, 0);
	req->wb_index	= page->index;
	page_cache_get(page);
	BUG_ON(PagePrivate(page));
	BUG_ON(!PageLocked(page));
	BUG_ON(page->mapping->host != inode);
	req->wb_offset  = offset;
	req->wb_pgbase	= offset;
	req->wb_bytes   = count;
	req->wb_context = get_nfs_open_context(ctx);
	kref_init(&req->wb_kref);
	return req;
}

void nfs_unlock_request(struct nfs_page *req)
{
	if (!NFS_WBACK_BUSY(req)) {
		printk(KERN_ERR "NFS: Invalid unlock attempted\n");
		BUG();
	}
	smp_mb__before_clear_bit();
	clear_bit(PG_BUSY, &req->wb_flags);
	smp_mb__after_clear_bit();
	wake_up_bit(&req->wb_flags, PG_BUSY);
	nfs_release_request(req);
}

static void nfs_clear_request(struct nfs_page *req)
{
	struct page *page = req->wb_page;
	struct nfs_open_context *ctx = req->wb_context;
	struct nfs_lock_context *l_ctx = req->wb_lock_context;

	if (page != NULL) {
		page_cache_release(page);
		req->wb_page = NULL;
	}
	if (l_ctx != NULL) {
		nfs_put_lock_context(l_ctx);
		req->wb_lock_context = NULL;
	}
	if (ctx != NULL) {
		put_nfs_open_context(ctx);
		req->wb_context = NULL;
	}
}


static void nfs_free_request(struct kref *kref)
{
	struct nfs_page *req = container_of(kref, struct nfs_page, wb_kref);

	
	nfs_clear_request(req);
	nfs_page_free(req);
}

void nfs_release_request(struct nfs_page *req)
{
	kref_put(&req->wb_kref, nfs_free_request);
}

static int nfs_wait_bit_uninterruptible(void *word)
{
	io_schedule();
	return 0;
}

int
nfs_wait_on_request(struct nfs_page *req)
{
	return wait_on_bit(&req->wb_flags, PG_BUSY,
			nfs_wait_bit_uninterruptible,
			TASK_UNINTERRUPTIBLE);
}

bool nfs_generic_pg_test(struct nfs_pageio_descriptor *desc, struct nfs_page *prev, struct nfs_page *req)
{
	if (desc->pg_bsize < PAGE_SIZE)
		return 0;

	return desc->pg_count + req->wb_bytes <= desc->pg_bsize;
}
EXPORT_SYMBOL_GPL(nfs_generic_pg_test);

void nfs_pageio_init(struct nfs_pageio_descriptor *desc,
		     struct inode *inode,
		     const struct nfs_pageio_ops *pg_ops,
		     size_t bsize,
		     int io_flags)
{
	INIT_LIST_HEAD(&desc->pg_list);
	desc->pg_bytes_written = 0;
	desc->pg_count = 0;
	desc->pg_bsize = bsize;
	desc->pg_base = 0;
	desc->pg_moreio = 0;
	desc->pg_recoalesce = 0;
	desc->pg_inode = inode;
	desc->pg_ops = pg_ops;
	desc->pg_ioflags = io_flags;
	desc->pg_error = 0;
	desc->pg_lseg = NULL;
}

static bool nfs_can_coalesce_requests(struct nfs_page *prev,
				      struct nfs_page *req,
				      struct nfs_pageio_descriptor *pgio)
{
	if (req->wb_context->cred != prev->wb_context->cred)
		return false;
	if (req->wb_lock_context->lockowner != prev->wb_lock_context->lockowner)
		return false;
	if (req->wb_context->state != prev->wb_context->state)
		return false;
	if (req->wb_index != (prev->wb_index + 1))
		return false;
	if (req->wb_pgbase != 0)
		return false;
	if (prev->wb_pgbase + prev->wb_bytes != PAGE_CACHE_SIZE)
		return false;
	return pgio->pg_ops->pg_test(pgio, prev, req);
}

static int nfs_pageio_do_add_request(struct nfs_pageio_descriptor *desc,
				     struct nfs_page *req)
{
	if (desc->pg_count != 0) {
		struct nfs_page *prev;

		prev = nfs_list_entry(desc->pg_list.prev);
		if (!nfs_can_coalesce_requests(prev, req, desc))
			return 0;
	} else {
		if (desc->pg_ops->pg_init)
			desc->pg_ops->pg_init(desc, req);
		desc->pg_base = req->wb_pgbase;
	}
	nfs_list_remove_request(req);
	nfs_list_add_request(req, &desc->pg_list);
	desc->pg_count += req->wb_bytes;
	return 1;
}

static void nfs_pageio_doio(struct nfs_pageio_descriptor *desc)
{
	if (!list_empty(&desc->pg_list)) {
		int error = desc->pg_ops->pg_doio(desc);
		if (error < 0)
			desc->pg_error = error;
		else
			desc->pg_bytes_written += desc->pg_count;
	}
	if (list_empty(&desc->pg_list)) {
		desc->pg_count = 0;
		desc->pg_base = 0;
	}
}

static int __nfs_pageio_add_request(struct nfs_pageio_descriptor *desc,
			   struct nfs_page *req)
{
	while (!nfs_pageio_do_add_request(desc, req)) {
		desc->pg_moreio = 1;
		nfs_pageio_doio(desc);
		if (desc->pg_error < 0)
			return 0;
		desc->pg_moreio = 0;
		if (desc->pg_recoalesce)
			return 0;
	}
	return 1;
}

static int nfs_do_recoalesce(struct nfs_pageio_descriptor *desc)
{
	LIST_HEAD(head);

	do {
		list_splice_init(&desc->pg_list, &head);
		desc->pg_bytes_written -= desc->pg_count;
		desc->pg_count = 0;
		desc->pg_base = 0;
		desc->pg_recoalesce = 0;

		while (!list_empty(&head)) {
			struct nfs_page *req;

			req = list_first_entry(&head, struct nfs_page, wb_list);
			nfs_list_remove_request(req);
			if (__nfs_pageio_add_request(desc, req))
				continue;
			if (desc->pg_error < 0)
				return 0;
			break;
		}
	} while (desc->pg_recoalesce);
	return 1;
}

int nfs_pageio_add_request(struct nfs_pageio_descriptor *desc,
		struct nfs_page *req)
{
	int ret;

	do {
		ret = __nfs_pageio_add_request(desc, req);
		if (ret)
			break;
		if (desc->pg_error < 0)
			break;
		ret = nfs_do_recoalesce(desc);
	} while (ret);
	return ret;
}

void nfs_pageio_complete(struct nfs_pageio_descriptor *desc)
{
	for (;;) {
		nfs_pageio_doio(desc);
		if (!desc->pg_recoalesce)
			break;
		if (!nfs_do_recoalesce(desc))
			break;
	}
}

void nfs_pageio_cond_complete(struct nfs_pageio_descriptor *desc, pgoff_t index)
{
	if (!list_empty(&desc->pg_list)) {
		struct nfs_page *prev = nfs_list_entry(desc->pg_list.prev);
		if (index != prev->wb_index + 1)
			nfs_pageio_complete(desc);
	}
}

int __init nfs_init_nfspagecache(void)
{
	nfs_page_cachep = kmem_cache_create("nfs_page",
					    sizeof(struct nfs_page),
					    0, SLAB_HWCACHE_ALIGN,
					    NULL);
	if (nfs_page_cachep == NULL)
		return -ENOMEM;

	return 0;
}

void nfs_destroy_nfspagecache(void)
{
	kmem_cache_destroy(nfs_page_cachep);
}

