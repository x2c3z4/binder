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
	{ 0xa8c16cf3, "module_layout" },
	{ 0x352091e6, "kmalloc_caches" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0xb5dcab5b, "remove_wait_queue" },
	{ 0x999e8297, "vfree" },
	{ 0xf432dd3d, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x571ab46f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xc0580937, "rb_erase" },
	{ 0xb4390f9a, "mcount" },
	{ 0x1000e51, "schedule" },
	{ 0x783c7933, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xa6dcc773, "rb_insert_color" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x5860aad4, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8381C1CFA57C10204E77DDA");
