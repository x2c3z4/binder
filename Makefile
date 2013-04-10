target:=msgbinder
objects:=binder.o

ifneq ($(KERNELRELEASE),)
  obj-m:=$(target).o
  $(target)-y:=$(objects)
else
  KDIR ?=/lib/modules/`uname -r`/build
all:
	$(MAKE) -C $(KDIR) M=$$PWD modules
install:
	sudo insmod $(target).ko
unins:
	sudo rmmod $(target).ko
clean:
	$(MAKE) -C $(KDIR) V=0 M=$$PWD clean

endif

