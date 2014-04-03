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
	{ 0x15692c87, "param_ops_int" },
	{ 0x3081b6a9, "eth_change_mtu" },
	{ 0x3bf318f0, "eth_validate_addr" },
	{ 0xbe69e964, "driver_unregister" },
	{ 0xe2baf0fc, "spi_register_driver" },
	{ 0xfc6ba7fe, "register_netdev" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9278e61e, "netdev_warn" },
	{ 0xc45c55cd, "dev_set_drvdata" },
	{ 0xff7123b0, "__mutex_init" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8a5c7a80, "regulator_enable" },
	{ 0x248ce02d, "regulator_get" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x8c7a3757, "of_get_named_gpio_flags" },
	{ 0xbc27f54c, "alloc_etherdev_mqs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe8fa924b, "__netif_schedule" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7ec60838, "mii_check_link" },
	{ 0x1eff7718, "netif_rx_ni" },
	{ 0xe4823a74, "eth_type_trans" },
	{ 0xff81a9fb, "__dynamic_netdev_dbg" },
	{ 0xe0dde964, "skb_put" },
	{ 0x1d6b4497, "__netdev_alloc_skb" },
	{ 0x588e8ef4, "dev_err" },
	{ 0x27cb133b, "eeprom_93cx6_multiread" },
	{ 0x822222db, "eeprom_93cx6_write" },
	{ 0x98bb5a22, "eeprom_93cx6_read" },
	{ 0x63d2ff63, "eeprom_93cx6_wren" },
	{ 0x1d531c55, "netif_device_detach" },
	{ 0x92b57248, "flush_work" },
	{ 0x78bf6be0, "netdev_info" },
	{ 0x2383efcb, "netif_device_attach" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9d669763, "memcpy" },
	{ 0xe8a52d23, "consume_skb" },
	{ 0x7536c2b1, "skb_dequeue" },
	{ 0xf34378af, "mutex_unlock" },
	{ 0xc93968d1, "mutex_lock" },
	{ 0xe6b3b90a, "arm_delay_ops" },
	{ 0x8af9621e, "netdev_err" },
	{ 0x5bc69315, "spi_sync" },
	{ 0xab2ff6d4, "mii_ethtool_gset" },
	{ 0xf8649624, "mii_ethtool_sset" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x13695803, "mii_nway_restart" },
	{ 0xbc7e9aa2, "mii_link_ok" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x875e351e, "skb_queue_tail" },
	{ 0x27e1a049, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc2103120, "netdev_printk" },
	{ 0x178ba18c, "_raw_spin_unlock" },
	{ 0x71c90087, "memcmp" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{ 0xfaf98462, "bitrev32" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xca569d07, "generic_mii_ioctl" },
	{ 0x8949858b, "schedule_work" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xb5bef536, "free_netdev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x35ea9631, "unregister_netdev" },
	{ 0xd85ac634, "regulator_put" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0xfe990052, "gpio_free" },
	{ 0x352a292e, "_dev_info" },
	{ 0x4a1f9926, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=eeprom_93cx6";

