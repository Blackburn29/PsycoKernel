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
	{ 0xe5326737, "clk_unprepare" },
	{ 0x92b57248, "flush_work" },
	{ 0xfeb36f73, "cdev_del" },
	{ 0x19394941, "kmalloc_caches" },
	{ 0x5fb39d3d, "cdev_init" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xf6bb0afc, "up_read" },
	{ 0x2ef9aa59, "clk_enable" },
	{ 0x178ba18c, "_raw_spin_unlock" },
	{ 0x363c7ca4, "mem_map" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x83b0ce2, "clk_disable" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0x82ffa6bf, "device_destroy" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xa258801f, "kthread_create_on_node" },
	{ 0x3c1ea6eb, "down_read" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x588e8ef4, "dev_err" },
	{ 0x797bded4, "mutex_lock_interruptible" },
	{ 0xff7123b0, "__mutex_init" },
	{ 0x9dbc1e12, "kthread_stop" },
	{ 0xe3f0223, "wait_for_completion_interruptible" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc93968d1, "mutex_lock" },
	{ 0xbf933245, "device_create" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf5b0df37, "__get_page_tail" },
	{ 0x537e679e, "release_pages" },
	{ 0x7ca6ce1, "cdev_add" },
	{ 0x352a292e, "_dev_info" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x681e95c, "get_user_pages" },
	{ 0x1000e51, "schedule" },
	{ 0xef64157b, "clk_prepare" },
	{ 0xb894926d, "schedule_work_on" },
	{ 0x98bf4ac6, "wake_up_process" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{ 0x7695f3e6, "clk_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x988478f, "sched_setscheduler" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xc88914c3, "remap_pfn_range" },
	{ 0xa75d1b93, "put_page" },
	{ 0x29679c49, "class_destroy" },
	{ 0xe402d987, "get_pid_task" },
	{ 0x7b5c8440, "vm_munmap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xad998077, "complete" },
	{ 0xff20f627, "vmalloc_to_page" },
	{ 0xf41a3c7a, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x6c458acc, "__class_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x15ccd6f2, "is_vmalloc_addr" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

