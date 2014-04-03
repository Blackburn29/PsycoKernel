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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc45c55cd, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0xedb571d9, "usb_kill_urb" },
	{ 0xeca6d11e, "__video_register_device" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x797bded4, "mutex_lock_interruptible" },
	{ 0xff7123b0, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xcdd3c0d, "video_unregister_device" },
	{ 0xec6019cf, "usb_set_interface" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc93968d1, "mutex_lock" },
	{ 0xbbfc113f, "usb_free_coherent" },
	{ 0x43776dc4, "vm_insert_page" },
	{ 0x439a0e19, "module_put" },
	{ 0x23d94878, "usb_submit_urb" },
	{ 0xef9782a6, "video_devdata" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x85145338, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x89a37804, "usb_clear_halt" },
	{ 0x1d998a29, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{  0xf1338, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xafa67775, "input_unregister_device" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x57ffeb41, "usb_ifnum_to_if" },
	{ 0xb81960ca, "snprintf" },
	{ 0xff20f627, "vmalloc_to_page" },
	{ 0xd0b28116, "usb_alloc_coherent" },
	{ 0x4a1f9926, "dev_get_drvdata" },
	{ 0x554c286, "usb_free_urb" },
	{ 0xee7f5dfe, "video_ioctl2" },
	{ 0x49d246ca, "try_module_get" },
	{ 0x6c7e5c0f, "usb_alloc_urb" },
	{ 0x4cdb3178, "ns_to_timeval" },
	{ 0x7218a7d9, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FFBCF4BD2374601FE6CCFCE");
