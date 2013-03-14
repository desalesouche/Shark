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
	{ 0x79ee379d, "QP_RegisterListener" },
	{ 0x669d57c5, "QP_UnregisterListener" },
	{ 0xbfdc1292, "kmalloc_caches" },
	{ 0x24ef294d, "QP_RegisterDetachCB" },
	{ 0x684b4b5f, "QP_Attach" },
	{ 0x2c494bbe, "kmem_cache_alloc_trace" },
	{ 0xec093f47, "QP_EnqueueCommit" },
	{ 0xa6928abb, "QP_EnqueueSpace" },
	{ 0x8f245ba1, "QP_EnqueueReset" },
	{ 0xca57d0a3, "QP_EnqueueSegment" },
	{ 0x65212e85, "QP_DequeueCommit" },
	{ 0x5da8a822, "QP_DequeueSpace" },
	{ 0x741e7938, "QP_DequeueReset" },
	{ 0x51a20a1f, "QP_DequeueSegment" },
	{ 0xc27487dd, "__bug" },
	{ 0x510044c, "QP_Detach" },
	{ 0x2f103932, "QP_Notify" },
	{ 0x42224298, "sscanf" },
	{ 0x810b3618, "param_ops_string" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x465757c3, "cpu_present_mask" },
	{ 0x34d7ae16, "queue_delayed_work_on" },
	{ 0x5fd3f501, "__alloc_workqueue_key" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x94f8c3be, "init_timer_key" },
	{ 0xe49775f9, "flush_delayed_work" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0x53d0677d, "queue_delayed_work" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0x9c56a19a, "destroy_workqueue" },
	{ 0xfc5b496f, "flush_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c96c7ef, "__mutex_init" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1f07fbb5, "__raw_spin_lock_init" },
	{ 0x52e7113e, "__init_waitqueue_head" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x7d11c268, "jiffies" },
	{ 0x71c90087, "memcmp" },
	{ 0x297843d3, "mutex_trylock" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x675b24bc, "finish_wait" },
	{ 0xa4c0d492, "prepare_to_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x5f754e5a, "memset" },
	{ 0x2226332d, "_raw_spin_lock" },
	{ 0xb41318e8, "_raw_spin_unlock" },
	{ 0xcd11e130, "__wake_up" },
	{ 0x3a056bb1, "_raw_spin_unlock_bh" },
	{ 0x8da206c6, "_raw_spin_lock_bh" },
	{ 0xe26e6d2c, "module_put" },
	{ 0x93f9b53f, "mutex_lock_interruptible" },
	{ 0x4c59c393, "mutex_unlock" },
	{ 0xa0f5e1a7, "kernel_sendmsg" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x27e1a049, "printk" },
	{ 0xa4b01c6f, "Mvpkm_CommEvRegisterProcessCB" },
	{ 0x8b9f5697, "kernel_bind" },
	{ 0xb01ae69a, "sock_create_kern" },
	{ 0x698385f9, "sock_release" },
	{ 0x5fe6c44c, "Mvpkm_CommEvUnregisterProcessCB" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mvpkm";


MODULE_INFO(srcversion, "3EDC81FF5DA7227B8828223");
