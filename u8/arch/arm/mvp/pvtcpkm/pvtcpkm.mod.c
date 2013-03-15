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
	{ 0xf11bb75b, "module_put" },
	{ 0x777f747d, "CommSvc_Unlock" },
	{ 0x2eb3c64f, "CommSvc_Lock" },
	{ 0xb86e4ab9, "random32" },
	{ 0x7d11c268, "jiffies" },
	{ 0x722e38e3, "CommSvc_Alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x810b3618, "param_ops_string" },
	{ 0x465757c3, "cpu_present_mask" },
	{ 0xa6cf2702, "queue_delayed_work_on" },
	{ 0x8f93ac8f, "__alloc_workqueue_key" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0xddc16c88, "flush_delayed_work" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0xec37dbca, "queue_delayed_work" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0xa52f5521, "destroy_workqueue" },
	{ 0x66c687f6, "flush_workqueue" },
	{ 0xcddb9f25, "kernel_connect" },
	{ 0x13478204, "kernel_bind" },
	{ 0x62dbeac7, "kernel_getsockopt" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6ffe317e, "kernel_listen" },
	{ 0x749f3761, "kernel_accept" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe5440e84, "kernel_getsockname" },
	{ 0x3f3321e8, "kernel_getpeername" },
	{ 0xa6c5fbea, "CommSvc_GetState" },
	{ 0x748e1aa0, "kmalloc_caches" },
	{ 0x7eed8d81, "kobject_init_and_add" },
	{ 0x26460463, "kmem_cache_alloc" },
	{ 0x3be6e87a, "Mvpkm_FindVMNamedKSet" },
	{ 0xec95ba36, "put_pid" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe56c942d, "pid_task" },
	{ 0x241cdff3, "find_get_pid" },
	{ 0x9d669763, "memcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x29537822, "kernel_setsockopt" },
	{ 0x6e04b501, "CommSvc_GetTranspInitArgs" },
	{ 0x5f754e5a, "memset" },
	{ 0x42224298, "sscanf" },
	{ 0x33c4d1dd, "__put_net" },
	{ 0x202c73d0, "kobject_put" },
	{ 0xe84dd843, "kobject_del" },
	{ 0xa383a788, "CommSvc_RegisterImpl" },
	{ 0x73d2de5d, "nf_register_hooks" },
	{ 0x1b967589, "nf_unregister_hooks" },
	{ 0x652aa62a, "CommSvc_UnregisterImpl" },
	{ 0x12523aed, "kernel_sock_ioctl" },
	{ 0x2ea55681, "sock_create_kern" },
	{ 0x7132aeda, "mutex_lock_interruptible" },
	{ 0xf688e8ac, "sock_release" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x3996a65c, "init_net" },
	{ 0x71c90087, "memcmp" },
	{ 0x7b1010cc, "Mvpkm_vmwareUid" },
	{ 0xddb4008, "__mutex_init" },
	{ 0x90b4f8d2, "mutex_trylock" },
	{ 0xdfd4df13, "CommSvc_Zombify" },
	{ 0x922260b3, "CommSvc_DispatchUnlock" },
	{ 0x7be4b684, "kernel_sock_shutdown" },
	{ 0x142a3fa8, "kernel_sendmsg" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0x3f7a31f4, "sk_free" },
	{ 0xf77ea1e4, "CommSvc_ScheduleAIOWork" },
	{ 0x26477c07, "__vmalloc" },
	{ 0x38e8378d, "pgprot_kernel" },
	{ 0x9548cb56, "mutex_lock" },
	{ 0x999e8297, "vfree" },
	{ 0xf06e428b, "mutex_unlock" },
	{ 0x419c4694, "CommSvc_WriteVec" },
	{ 0x157bf556, "kernel_recvmsg" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xf412c9ca, "CommSvc_Write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=commkm,mvpkm";


MODULE_INFO(srcversion, "606EE0797294E45A3318567");
