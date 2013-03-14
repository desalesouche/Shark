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
	{ 0xcd656be8, "module_layout" },
	{ 0xe26e6d2c, "module_put" },
	{ 0x777f747d, "CommSvc_Unlock" },
	{ 0x2eb3c64f, "CommSvc_Lock" },
	{ 0xb86e4ab9, "random32" },
	{ 0x7d11c268, "jiffies" },
	{ 0x63bea5c, "CommSvc_Alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x1f07fbb5, "__raw_spin_lock_init" },
	{ 0x810b3618, "param_ops_string" },
	{ 0x465757c3, "cpu_present_mask" },
	{ 0x34d7ae16, "queue_delayed_work_on" },
	{ 0x5fd3f501, "__alloc_workqueue_key" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x94f8c3be, "init_timer_key" },
	{ 0xe49775f9, "flush_delayed_work" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0x53d0677d, "queue_delayed_work" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0x9c56a19a, "destroy_workqueue" },
	{ 0xfc5b496f, "flush_workqueue" },
	{ 0xb15de4c6, "kernel_connect" },
	{ 0x8b9f5697, "kernel_bind" },
	{ 0x4b1bd34b, "kernel_getsockopt" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xbfc68c4e, "kernel_listen" },
	{ 0x22dd6b27, "kernel_accept" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x868471a3, "kernel_getsockname" },
	{ 0xe567d54, "kernel_getpeername" },
	{ 0xa6c5fbea, "CommSvc_GetState" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbfdc1292, "kmalloc_caches" },
	{ 0x77250cbf, "kobject_init_and_add" },
	{ 0x2c494bbe, "kmem_cache_alloc_trace" },
	{ 0xa23e88d9, "Mvpkm_FindVMNamedKSet" },
	{ 0x165b8811, "put_pid" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x45de1a27, "pid_task" },
	{ 0x617d347c, "find_get_pid" },
	{ 0x9d669763, "memcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x85939292, "kernel_setsockopt" },
	{ 0x6e04b501, "CommSvc_GetTranspInitArgs" },
	{ 0x5f754e5a, "memset" },
	{ 0x42224298, "sscanf" },
	{ 0xacfd0809, "__put_net" },
	{ 0x22d8a349, "kobject_put" },
	{ 0x4662903c, "kobject_del" },
	{ 0xe69b2b6a, "CommSvc_RegisterImpl" },
	{ 0x5b0c9741, "nf_register_hooks" },
	{ 0x40188cbb, "nf_unregister_hooks" },
	{ 0x6b6fbf5f, "CommSvc_UnregisterImpl" },
	{ 0x5f7fe88f, "kernel_sock_ioctl" },
	{ 0xb01ae69a, "sock_create_kern" },
	{ 0x93f9b53f, "mutex_lock_interruptible" },
	{ 0x698385f9, "sock_release" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x5c9d252a, "init_net" },
	{ 0x71c90087, "memcmp" },
	{ 0x7b1010cc, "Mvpkm_vmwareUid" },
	{ 0x5c96c7ef, "__mutex_init" },
	{ 0x343a1a8, "__list_add" },
	{ 0x297843d3, "mutex_trylock" },
	{ 0xdfd4df13, "CommSvc_Zombify" },
	{ 0x922260b3, "CommSvc_DispatchUnlock" },
	{ 0xba23a2ae, "kernel_sock_shutdown" },
	{ 0x521445b, "list_del" },
	{ 0xa0f5e1a7, "kernel_sendmsg" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0xc27487dd, "__bug" },
	{ 0x10647f6f, "sk_free" },
	{ 0xfd12932f, "CommSvc_ScheduleAIOWork" },
	{ 0x26477c07, "__vmalloc" },
	{ 0x38e8378d, "pgprot_kernel" },
	{ 0x1b02f98f, "mutex_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x4c59c393, "mutex_unlock" },
	{ 0x419c4694, "CommSvc_WriteVec" },
	{ 0x778d7264, "kernel_recvmsg" },
	{ 0xb41318e8, "_raw_spin_unlock" },
	{ 0x2226332d, "_raw_spin_lock" },
	{ 0xf412c9ca, "CommSvc_Write" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=commkm,mvpkm";


MODULE_INFO(srcversion, "606EE0797294E45A3318567");
