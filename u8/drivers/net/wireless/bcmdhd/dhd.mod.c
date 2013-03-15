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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbf3c330d, "module_layout" },
	{ 0xf7af74f, "register_netdevice" },
	{ 0x14d4a9c5, "_change_bit" },
	{ 0x88f59f45, "cfg80211_remain_on_channel_expired" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xad7d6d8c, "wiphy_register" },
	{ 0x974e7fb6, "wiphy_new" },
	{ 0x99bb8806, "memmove" },
	{ 0x6bfc928d, "cfg80211_ibss_joined" },
	{ 0xd9064a84, "cfg80211_del_sta" },
	{ 0xd86ad9ae, "cfg80211_new_sta" },
	{ 0xb8215ba4, "cfg80211_roamed" },
	{ 0xae63678e, "cfg80211_connect_result" },
	{ 0x5fcaa606, "cfg80211_michael_mic_failure" },
	{ 0x23427408, "cfg80211_rx_mgmt" },
	{ 0xb86e4ab9, "random32" },
	{ 0x4f7f2d1b, "complete" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x519287d2, "cfg80211_get_bss" },
	{ 0x8a7c6f1, "add_timer" },
	{ 0x471b603b, "cfg80211_ready_on_channel" },
	{ 0x48d316aa, "wait_for_completion_timeout" },
	{ 0xddf2a584, "cfg80211_mgmt_tx_status" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x474d691b, "wiphy_free" },
	{ 0xf2b25f24, "wiphy_unregister" },
	{ 0x83ce82eb, "get_monotonic_boottime" },
	{ 0xd7779230, "cfg80211_put_bss" },
	{ 0x8094ef4d, "cfg80211_inform_bss_frame" },
	{ 0xebb555f6, "__ieee80211_get_channel" },
	{ 0x9b147403, "rfkill_register" },
	{ 0x34323ebf, "rfkill_alloc" },
	{ 0xbf00465b, "rfkill_destroy" },
	{ 0x333da742, "rfkill_unregister" },
	{ 0x256b69c2, "wiphy_apply_custom_regulatory" },
	{ 0x7513e94e, "ieee80211_channel_to_frequency" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x9b375130, "cfg80211_disconnected" },
	{ 0x8ac4bbca, "cfg80211_scan_done" },
	{ 0x1bd9c1cd, "kthread_stop" },
	{ 0x821bc18b, "send_sig" },
	{ 0x42224298, "sscanf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xeacd6203, "platform_driver_register" },
	{ 0xb65acb51, "platform_get_resource_byname" },
	{ 0x6e48bc3b, "platform_driver_unregister" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x89d3f707, "skb_put" },
	{ 0xc5f7dc03, "__alloc_skb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x44970938, "dma_alloc_coherent" },
	{ 0xd3bff16e, "dma_free_coherent" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x24a1980f, "skb_clone" },
	{ 0x9f984513, "strrchr" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x587df050, "outer_cache" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x61651be, "strcat" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0x9d9fede5, "sched_setscheduler" },
	{ 0x810b3618, "param_ops_string" },
	{ 0xe914e41e, "strcpy" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x718565d5, "remove_wait_queue" },
	{ 0x3fdacc6f, "add_wait_queue" },
	{ 0x1d245ec5, "dev_kfree_skb_any" },
	{ 0xad9f911e, "consume_skb" },
	{ 0x64b5af04, "skb_realloc_headroom" },
	{ 0xf088223e, "__netif_schedule" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x107312f3, "netif_rx_ni" },
	{ 0x987d3493, "netif_rx" },
	{ 0xf81c824a, "eth_type_trans" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xd4fab16, "complete_and_exit" },
	{ 0x1c3f30f, "down_interruptible" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x569e463, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x600d212a, "wake_up_process" },
	{ 0x77016ced, "kthread_create_on_node" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x3cfedb3f, "register_pm_notifier" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0xddb4008, "__mutex_init" },
	{ 0xde5d1761, "wake_lock_init" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x2fd61cd, "wait_for_completion" },
	{ 0x89177421, "wake_lock_destroy" },
	{ 0x6892088c, "unregister_pm_notifier" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0xa4797ca9, "alloc_etherdev_mqs" },
	{ 0xbd518215, "register_netdev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x24ad2865, "free_netdev" },
	{ 0x5baadc95, "unregister_netdev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc6cbbc89, "capable" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xa4476cec, "del_timer_sync" },
	{ 0x53985936, "mod_timer" },
	{ 0xb5a0e267, "down" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x72542c85, "__wake_up" },
	{ 0x8949858b, "schedule_work" },
	{ 0x9548cb56, "mutex_lock" },
	{ 0xf06e428b, "mutex_unlock" },
	{ 0x55b74b46, "wake_unlock" },
	{ 0xf045cd70, "wake_lock_timeout" },
	{ 0xdda9e423, "wake_lock" },
	{ 0xb0641b9e, "wake_lock_active" },
	{ 0x6b6bee11, "down_timeout" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xdfa3714a, "filp_close" },
	{ 0x706bf801, "kernel_read" },
	{ 0x129d144, "filp_open" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x97255bdf, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7d11c268, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5f754e5a, "memset" },
	{ 0xd85f8422, "skb_push" },
	{ 0x71c90087, "memcmp" },
	{ 0x3de40fe4, "skb_pull" },
	{ 0x7a728ef4, "up" },
	{ 0x748e1aa0, "kmalloc_caches" },
	{ 0x26460463, "kmem_cache_alloc" },
	{ 0xa8d67c15, "sdio_register_driver" },
	{ 0x5606f34b, "sdio_set_host_pm_flags" },
	{ 0x2eb43bcd, "sdio_get_host_pm_caps" },
	{ 0x37a0cba, "kfree" },
	{ 0x370b35f0, "sdio_unregister_driver" },
	{ 0x74d36fc8, "sdio_set_block_size" },
	{ 0xded6c23e, "sdio_reset_comm" },
	{ 0xa7a986b, "sdio_disable_func" },
	{ 0x8bdaf841, "sdio_enable_func" },
	{ 0x881a2386, "sdio_f0_readb" },
	{ 0x709cf83, "sdio_writeb" },
	{ 0x3d6ef3bf, "sdio_readb" },
	{ 0x29ddeebb, "sdio_f0_writeb" },
	{ 0x3a4620d9, "sdio_writel" },
	{ 0xc16ebe2a, "sdio_readl" },
	{ 0x377496c9, "sdio_readw" },
	{ 0x737a30bb, "sdio_writew" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x95b1d82f, "mem_map" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x5c4426f7, "mmc_wait_for_req" },
	{ 0x2153692, "mmc_set_data_timeout" },
	{ 0xed9be429, "sdio_release_host" },
	{ 0xa4a88c65, "sdio_memcpy_fromio" },
	{ 0xf4713ac3, "sdio_memcpy_toio" },
	{ 0x3c201f73, "sdio_readsb" },
	{ 0xa0867ad4, "sdio_claim_host" },
	{ 0x27e1a049, "printk" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x70471ac0, "dev_set_drvdata" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x607be3fb, "dev_get_drvdata" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x9d669763, "memcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v02D0d0000*");
MODULE_ALIAS("sdio:c*v02D0d0492*");
MODULE_ALIAS("sdio:c*v02D0d0493*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4319*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0dA8E7*");
MODULE_ALIAS("sdio:c00v*d*");
