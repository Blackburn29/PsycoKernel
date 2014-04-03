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
	{ 0x3dd1ff3b, "remove_proc_entry" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x61cfdb83, "input_event" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xcc3242b8, "proc_mkdir" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc93968d1, "mutex_lock" },
	{ 0xfd6293c2, "boot_tvec_bases" },
	{ 0x77edf722, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x85145338, "input_register_device" },
	{ 0x1d998a29, "input_free_device" },
	{ 0xff573762, "create_proc_entry" },
	{ 0xafa67775, "input_unregister_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7218a7d9, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

