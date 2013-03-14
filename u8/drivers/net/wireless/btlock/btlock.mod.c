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
	{ 0x5f754e5a, "memset" },
	{ 0x63823ca2, "misc_register" },
	{ 0xa83e7b32, "up" },
	{ 0x3cb222d8, "down_killable" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd02cfa04, "down_trylock" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xd46320cd, "misc_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

