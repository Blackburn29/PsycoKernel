#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6c1934ef, "module_layout" },
	{ 0x19394941, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x17523ce7, "dvb_frontend_sleep_until" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6d4f69dd, "i2c_transfer" },
	{ 0xd68a099e, "timeval_usec_diff" },
	{ 0x7d11c268, "jiffies" },
	{ 0x27e1a049, "printk" },
	{ 0xe6b3b90a, "arm_delay_ops" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

