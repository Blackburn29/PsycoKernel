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
	{ 0x734119ca, "kobject_put" },
	{ 0x19394941, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xea6c069f, "put_pid" },
	{ 0xdfd4df13, "CommSvc_Zombify" },
	{ 0x20df9911, "kernel_sendmsg" },
	{ 0x178ba18c, "_raw_spin_unlock" },
	{ 0x777f747d, "CommSvc_Unlock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xf19e9355, "cpu_online_mask" },
	{ 0xb569c309, "CommSvc_Alloc" },
	{ 0x40106dde, "sock_release" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xacec7924, "sock_create_kern" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0xe2bb1760, "kobject_del" },
	{ 0x999e8297, "vfree" },
	{ 0xc30794e8, "kernel_listen" },
	{ 0x2bd29c00, "__put_net" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0x258e28f6, "mutex_trylock" },
	{ 0x221517a4, "kernel_sock_ioctl" },
	{ 0x4d405db8, "param_ops_string" },
	{ 0xf412c9ca, "CommSvc_Write" },
	{ 0x7b1010cc, "Mvpkm_vmwareUid" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xccb87469, "kernel_setsockopt" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6533706, "kernel_connect" },
	{ 0xb86e4ab9, "random32" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x922260b3, "CommSvc_DispatchUnlock" },
	{ 0x797bded4, "mutex_lock_interruptible" },
	{ 0xff7123b0, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x3561e7c5, "kobject_init_and_add" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc93968d1, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4f0679b1, "kernel_sock_shutdown" },
	{ 0xc8e62b0f, "sk_free" },
	{ 0x17030251, "kernel_getsockname" },
	{ 0xdd78d1c5, "kernel_getpeername" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2eb3c64f, "CommSvc_Lock" },
	{ 0x7a023f15, "pid_task" },
	{ 0x4f9c0673, "init_net" },
	{ 0x7977b4e3, "nf_unregister_hooks" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x709bb408, "CommSvc_RegisterImpl" },
	{ 0x74cc1cbe, "unregister_cpu_notifier" },
	{ 0x439a0e19, "module_put" },
	{ 0xb7717fc1, "kernel_getsockopt" },
	{ 0x4550ba8a, "register_cpu_notifier" },
	{ 0x2901a718, "queue_delayed_work_on" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd3e6f60d, "cpu_possible_mask" },
	{ 0xa6c5fbea, "CommSvc_GetState" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd7d79132, "put_online_cpus" },
	{ 0xe49775f9, "flush_delayed_work" },
	{ 0x3efb35c9, "get_online_cpus" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{ 0x62754f0d, "kernel_recvmsg" },
	{ 0x8afe0579, "kernel_accept" },
	{ 0xe8af60b, "Mvpkm_vmwareGid" },
	{ 0xf39b9aed, "find_get_pid" },
	{ 0x28d6861d, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x58832f06, "nf_register_hooks" },
	{ 0xfd12932f, "CommSvc_ScheduleAIOWork" },
	{ 0xa8f156ec, "kernel_bind" },
	{ 0x1db7dc40, "pgprot_kernel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4348bdbb, "CommSvc_UnregisterImpl" },
	{ 0x6e04b501, "CommSvc_GetTranspInitArgs" },
	{ 0x47c149ab, "queue_delayed_work" },
	{ 0x49d246ca, "try_module_get" },
	{ 0x8469b626, "CommSvc_WriteVec" },
	{ 0x23dd8ee3, "Mvpkm_FindVMNamedKSet" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=commkm,mvpkm";


MODULE_INFO(srcversion, "3B641FBC991A10F5F00450F");
