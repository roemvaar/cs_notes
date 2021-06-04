# Linux

## Kernel Initialization

When the power is applied to an embedded Linux system, a complex
sequence of events is started. After a few tens of seconds, the
Linux kernel is operational and has spawned a series of application
Programs as specified by the system init scripts.

Upon power-on, the bootloader in an embedded system is the first
software to get processor control. After the bootloader has performed
some low-level hardware initialization, control is passed to the Linux
kernel. This can be done in two ways:

1) A manual sequence of events to facilitate development process
2) Automated startup sequence typical of a production environment

## Embedded Linux

Linux kernel is only a small component of an embedded system
based on Linux. In addition to the Linux kernel, you need the
following components to develop, test, and launch your embedded
Linux project:

- A **bootloader** ported and configured for your specific hardware platform
- A **cross-compiler** and associated **toolchain** for your chosen architecture
- A **file system** containing many packages - binary executables and libraries
compiled for your native hardware architecture/processor
- **Device drivers** for any custom devices on your board
- A **device tree** enabled for your particular processor and board

These are the components of an embedded Linux distribution.

## Drivers

### Char vs Block Drivers

- Char drivers: Character device drivers normally perform I/O in a byte stream.
- Block drivers: Devices that support a file system are known as block devices. Drivers written for these devices are known as block device drivers. 

### Kernel Drivers vs User Space Drivers 

User space driver vs Kernel space driver - checar el pdf de linux-kernel-slides.pdf p.46

## Kernel or Module?

The **kernel image** is a **single file**, resulting from the linking of all
object files that correspond to features enabled in the configuration-

- This is the file that gets loaded in memory by the bootloader
- All included features are therefore available as soon as the kernel starts,
at a time where no filesystem exists

Some features (device drivers, filesystems, etc.) can however be compiled as
**modules**.

- These are plugings that can be laoded/unloaded dynamically to add/remove
features to the kernel
- Each **module is stored as a separate file in the filesystem** (.ko file),
and therefore access to a filesystem is mandatory to use modules.
- This is not posible in the early boot procedure of the kernel, because no
filesystem is available.

## Kernel Compilation Results

- **vmlinux**, the raw uncompressed kernel image, in the ELF format, useful
for debugging purposes, but cannot be booted
- arch/< arch >/boot/*Image, the final, usually compressed, kernel image that
can be booted
  - bzImage for x86, zImage for ARM, Image.gz for RISC-V, vmlinux.bing.gz for
    ARC, etc.
- arch/< arch >/boot/dts/*.dtb, compiled Device Tree files (on some
architectures)
- All kernel modules, spread over the kernel source tree, as .ko (kernel
object) files.
 
 ## Thread vs Process
 
 ## Inter-Process Communication 
 
 ## Synchronization and messaging mechanisms
 
Semaphores, queues, etc.
 
