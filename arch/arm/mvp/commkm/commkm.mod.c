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
	{ 0x92be3e2, "QP_DequeueReset" },
	{ 0x20df9911, "kernel_sendmsg" },
	{ 0x178ba18c, "_raw_spin_unlock" },
	{ 0x79ee379d, "QP_RegisterListener" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf19e9355, "cpu_online_mask" },
	{ 0x772fb7e0, "QP_DequeueSpace" },
	{ 0x40106dde, "sock_release" },
	{ 0x3b502f70, "_raw_spin_lock_bh" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xacec7924, "sock_create_kern" },
	{ 0x6f57dc08, "QP_DequeueCommit" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0xe7d4007b, "QP_EnqueueCommit" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0x25793f1d, "QP_DequeueSegment" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0x258e28f6, "mutex_trylock" },
	{ 0x4d405db8, "param_ops_string" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x797bded4, "mutex_lock_interruptible" },
	{ 0xff7123b0, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa4b01c6f, "Mvpkm_CommEvRegisterProcessCB" },
	{ 0x74cc1cbe, "unregister_cpu_notifier" },
	{ 0x439a0e19, "module_put" },
	{ 0x4550ba8a, "register_cpu_notifier" },
	{ 0x5fe6c44c, "Mvpkm_CommEvUnregisterProcessCB" },
	{ 0xc73dd955, "_raw_spin_unlock_bh" },
	{ 0x2901a718, "queue_delayed_work_on" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd3e6f60d, "cpu_possible_mask" },
	{ 0x82ad763a, "QP_EnqueueReset" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xd7d79132, "put_online_cpus" },
	{ 0xe49775f9, "flush_delayed_work" },
	{ 0x3efb35c9, "get_online_cpus" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{  0xf1338, "__wake_up" },
	{ 0x669d57c5, "QP_UnregisterListener" },
	{ 0x76cf8b6d, "QP_RegisterDetachCB" },
	{ 0x6f66a2c1, "QP_EnqueueSegment" },
	{ 0xca2163c8, "QP_Detach" },
	{ 0x2f103932, "QP_Notify" },
	{ 0x37a0cba, "kfree" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0xfca92238, "QP_EnqueueSpace" },
	{ 0xa8f156ec, "kernel_bind" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x47c149ab, "queue_delayed_work" },
	{ 0x49d246ca, "try_module_get" },
	{ 0xe38def62, "QP_Attach" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mvpkm";


MODULE_INFO(srcversion, "16EA81F257149D62C659C10");
