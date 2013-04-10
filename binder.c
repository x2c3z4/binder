#include <linux/module.h>
#include <linux/init.h>


#define debug(fmt,args...) printk(fmt,##args)

static int __init binder_init()
{
  int ret = 0;
  debug("install msgbinder module\n");
  return ret;
}

static void __exit binder_exit()
{
  debug("remove msgbinder module\n");
}

module_init(binder_init);
module_exit(binder_exit);
MODULE_LICENSE("BSD");
