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
	{ 0x15692c87, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc45c55cd, "dev_set_drvdata" },
	{ 0x6d4f69dd, "i2c_transfer" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0x29f03544, "i2c_add_adapter" },
	{ 0xe41c958e, "dvb_frontend_detach" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x797bded4, "mutex_lock_interruptible" },
	{ 0xff7123b0, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x328a05f1, "strncpy" },
	{ 0x5d55b894, "dibx000_exit_i2c_master" },
	{ 0x959730ce, "dibx000_reset_i2c_master" },
	{ 0xfc6ef6e, "i2c_del_adapter" },
	{ 0x349d78b0, "dibx000_get_i2c_adapter" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe5ae8707, "intlog10" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2e1a9eb1, "dibx000_init_i2c_master" },
	{ 0x4a1f9926, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,dibx000_common";

