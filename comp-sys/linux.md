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

### Kernel Drivers vs User Space Drivers 

User space driver vs Kernel space driver - checar el pdf de linux-kernel-slides.pdf p.46

