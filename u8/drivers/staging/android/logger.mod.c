#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbf3c330d, "module_layout" },
	{ 0x72542c85, "__wake_up" },
	{ 0x67053080, "current_kernel_time" },
	{ 0xe92e343, "misc_register" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x1000e51, "schedule" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x9d669763, "memcpy" },
	{ 0x748e1aa0, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd8a2ab95, "in_egroup_p" },
	{ 0x26460463, "kmem_cache_alloc" },
	{ 0x8b645346, "nonseekable_open" },
	{ 0x7d11c268, "jiffies" },
	{ 0x27e1a049, "printk" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x37a0cba, "kfree" },
	{ 0xf06e428b, "mutex_unlock" },
	{ 0x9548cb56, "mutex_lock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

