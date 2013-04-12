#include <linux/module.h>
#include <linux/init.h>


#include "fast_slob.h"

#define DEBUG

#ifdef DEBUG
#define debug(fmt,args...) printk(fmt,##args)
#else
#define debug(fmt,args...)
#endif


struct fast_slob *slob;

static int __init binder_init()
{
  int ret = 0;
  debug("install msgbinder module\n");
  
  slob = fast_slob_create(100,100,5,10);
  if(!slob)
    printk("[-] slob is null\n");
  return ret;
}

static void __exit binder_exit()
{
  if(slob)
    fast_slob_destroy(slob);
  debug("remove msgbinder module\n");
}

module_init(binder_init);
module_exit(binder_exit);
MODULE_LICENSE("BSD");
