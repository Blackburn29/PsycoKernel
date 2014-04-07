#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6c1934ef, "module_layout" },
	{ 0x5f7bd551, "dm_unregister_target" },
	{ 0xad0fb004, "kmem_cache_destroy" },
	{ 0xcecd14a1, "dm_register_target" },
	{ 0x8c2f3c2c, "kmem_cache_create" },
	{ 0x64999478, "congestion_wait" },
	{ 0xb448019f, "bio_add_page" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0x2f4ea1ac, "wait_for_completion" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xfa4f7cc0, "mempool_alloc" },
	{ 0xad998077, "complete" },
	{ 0x46385ba3, "generic_make_request" },
	{ 0xe61beaf1, "bio_alloc_bioset" },
	{ 0xefdd2345, "sg_init_one" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x8810ad5e, "crypto_xor" },
	{ 0x6769b2cf, "kmap_atomic" },
	{ 0x49528e67, "crypto_shash_update" },
	{ 0x33543801, "queue_work" },
	{ 0xe1df65bb, "bio_put" },
	{ 0x37aaf7fd, "crypto_alloc_base" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x53326531, "mempool_alloc_pages" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xe04f7caa, "dm_read_arg_group" },
	{ 0xc6ef1dce, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x6ceab94a, "bioset_create" },
	{ 0x98dfe218, "mempool_create" },
	{ 0xc12f4f9c, "crypto_alloc_ablkcipher" },
	{ 0x37a0cba, "kfree" },
	{ 0xb81960ca, "snprintf" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x349cba85, "strchr" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19394941, "kmalloc_caches" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{ 0x8ac84c97, "crypto_alloc_shash" },
	{ 0x7a4497db, "kzfree" },
	{ 0x3caf5856, "dm_put_device" },
	{ 0x6a05bb5d, "mempool_destroy" },
	{ 0xf90ce188, "bioset_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcd298947, "crypto_destroy_tfm" },
	{ 0x23e3cb7, "bio_endio" },
	{ 0x8dd6c933, "mempool_free" },
	{ 0xe4165b2c, "bio_free" },
	{ 0x9d669763, "memcpy" },
	{ 0x91715312, "sprintf" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x76cf47f6, "__aeabi_llsl" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5f754e5a, "memset" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

