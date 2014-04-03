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
	{ 0x19394941, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcaa0f9e9, "mobicore_open" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0x3fe99d1f, "mobicore_unmap_vmem" },
	{ 0xa4294163, "netlink_kernel_create" },
	{ 0x588e8ef4, "dev_err" },
	{ 0x797bded4, "mutex_lock_interruptible" },
	{ 0xff7123b0, "__mutex_init" },
	{ 0xc2cbad, "netlink_kernel_release" },
	{ 0xa4424a94, "mobicore_map_vmem" },
	{ 0x705082e2, "mobicore_free_wsm" },
	{ 0xa5af657d, "netlink_unicast" },
	{ 0x4f9c0673, "init_net" },
	{ 0x352a292e, "_dev_info" },
	{ 0x65ea8195, "__alloc_skb" },
	{ 0x9b783e01, "mobicore_allocate_wsm" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd7894a7c, "kfree_skb" },
	{ 0x68fb278c, "netlink_ack" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa72dab62, "up" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf41a3c7a, "dev_set_name" },
	{ 0x1d7681f2, "__nlmsg_put" },
	{ 0x27e4faa5, "down_timeout" },
	{ 0xdfcb89fb, "mobicore_release" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mcdrvmodule";

