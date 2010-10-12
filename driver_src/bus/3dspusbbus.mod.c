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
	{ 0x53f024fd, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xea9d8c40, "kmalloc_caches" },
	{ 0x4aabc7c4, "__tracepoint_kmalloc" },
	{ 0x6d788946, "__register_chrdev" },
	{ 0xdffc6811, "kmem_cache_alloc_notrace" },
	{ 0xb72397d5, "printk" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x362ef408, "_copy_from_user" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6252C8AFA788C1446924DB5");
