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
	{ 0x82ffa6bf, "device_destroy" },
	{ 0x29679c49, "class_destroy" },
	{ 0xbf933245, "device_create" },
	{ 0xb38a7c40, "msm_find_domain_no" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xfeb36f73, "cdev_del" },
	{ 0x6c458acc, "__class_create" },
	{ 0x7ca6ce1, "cdev_add" },
	{ 0x5fb39d3d, "cdev_init" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xd55ad93b, "iommu_group_get_iommudata" },
	{ 0x14b48b0, "iommu_group_find" },
	{ 0x9ed1c460, "of_find_property" },
	{ 0x7b94995a, "of_find_compatible_node" },
	{ 0xe2425d18, "msm_ion_client_create" },
	{ 0xff7123b0, "__mutex_init" },
	{ 0x9b5fd507, "wait_for_completion_timeout" },
	{ 0xf6d10005, "smd_named_open_on_edge" },
	{ 0xc93968d1, "mutex_lock" },
	{ 0x19394941, "kmalloc_caches" },
	{ 0x2f4ea1ac, "wait_for_completion" },
	{ 0x68506e3e, "follow_pfn" },
	{ 0x9cb6171a, "find_vma" },
	{ 0xb859f38b, "krealloc" },
	{ 0xc5e9c169, "ion_import_dma_buf" },
	{ 0xf6bb0afc, "up_read" },
	{ 0x3c1ea6eb, "down_read" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{ 0x49d246ca, "try_module_get" },
	{ 0xf24a6970, "smd_write" },
	{ 0xf32b37cb, "iommu_attach_group" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x99bb8806, "memmove" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xe3f0223, "wait_for_completion_interruptible" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xba8d23a9, "iommu_detach_group" },
	{ 0xc09978d4, "ion_sg_table" },
	{ 0xb415c4f, "ion_map_iommu" },
	{ 0xba05683b, "ion_map_kernel" },
	{ 0x22df9a07, "ion_alloc" },
	{ 0x439a0e19, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x26714f2f, "ion_client_destroy" },
	{ 0x8e481aa, "smd_read_from_cb" },
	{ 0x178ba18c, "_raw_spin_unlock" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{ 0xad998077, "complete" },
	{ 0xab9db7cb, "ion_unmap_kernel" },
	{ 0x6f189d7a, "ion_free" },
	{ 0xdf15f85a, "ion_unmap_iommu" },
	{ 0x27e1a049, "printk" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0xf687713e, "smd_close" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x27f7719a, "cpu_cache" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

