# Embedded Linux

Linux kernel is only a small component of an embedded system
based on Linux. In addition to the Linux kernel, you need the
following components to develop, test, and launch your embedded
Linux project:

- A **cross-compiler** and associated **toolchain** for your chosen architecture.
It's a set of tools that compiles source code into executables that can run on
your target device and includes a compiler, a linker, and runtime libraries.


- A **bootloader** ported and configured for your specific hardware platform. 
It's the program that initializes the board and loads the Linux kernel.

- **Linux kernel** which is the heart of the system, managing system resources and
interfacing with hardware.

- A **root filesystem** containing many packages - binary executables and libraries
compiled for your native hardware architecture/processor. Contains libraries and
programs that are run once the kernel has completed its initialization.

Optionally there are other elements, such as:

- **Device drivers** for any custom devices on your board.

- A **device tree** enabled for your particular processor and board. It's a data
structures that describe the device hardware.

- The collection of **programs** specific to your embedded application that makes
the device do whatever it is supposed to do, e.g. display movies, control a robot,
fly a drone, etc.

These are the components of an embedded Linux distribution.

## Selection hardware for embedded Linux

1. A CPU architecture that is supported by the kernel - find them at linux repo at
arch/ directoy, all of them are 32 or 64 bits, and most of them have MMU.

2. A reasonable amount of RAM - 16 MiB is a good minimum.

3. Non-volatile storage - usually flash memory. 8 MiB is enough for a simple device
such as a webcam or a simple router.

4. A serial port is very useful, preferably a UART-based serial port. It doesn't
have to be fitted in production boards, but makes board bring-up, debugging, and
development much easier.

5. You need some means to load software when starting from scratch. JTAG is very
common, but modern SoCs support SD and micro SD cards, or serial interfaces such
as UART or USB.

## Frequently Asked Questions

TODO:
Embedded Linux is the usage of the Linux kernel and various open-source components in embedded systems
Components:
Cross-compilation toolchain
Bootloader
Linux Kernel
C Library
Libraries and applications
