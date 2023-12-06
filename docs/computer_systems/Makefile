ifneq ($(KERNELRELEASE),)
obj-m := hello_version.o
obj-m := version_param.o
obj-m := time.o
else
KDIR ?= $(HOME)/linux-kernel-labs/src/linux
all:
	$(MAKE) -C $(KDIR) M=$$PWD

clean:
	$(MAKE) -C $(KDIR) M=$$PWD clean
endif
