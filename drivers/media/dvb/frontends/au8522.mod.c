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
	{ 0xf9a482f9, "msleep" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xada4bb27, "i2c_del_driver" },
	{ 0x6d4f69dd, "i2c_transfer" },
	{ 0x33dc910e, "v4l2_chip_ident_i2c_client" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0x27e1a049, "printk" },
	{ 0xc93968d1, "mutex_lock" },
	{ 0xb97bf94c, "v4l2_device_unregister_subdev" },
	{ 0x92c8eecf, "i2c_register_driver" },
	{ 0x791ab099, "v4l2_ctrl_query_fill" },
	{ 0x1af6413e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4a1f9926, "dev_get_drvdata" },
	{ 0x7308fd8d, "v4l2_i2c_subdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:au8522");
