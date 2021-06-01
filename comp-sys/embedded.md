# Embedded Systems

**Characteristics of an embedded system**

- Contains a processing engine, such as a general
purpose microprocessor.
- Typically designed for a specific application or
purpose.
- Includes a single (or no) user interface.
- Often is resource-limited. For example, it might
have a small memory footprint and no hard drive.
- Might have power limitations, such as requirements
to operate from batteries.
- Not typically used as a general-purpose computing
platform.
- General has application software built in, not
user-selected.
- Ships with all intended application hardware and
software preintegrated.
- Often is intended for applications without human
intervention.

**Tasks of a bootloader**

- Initialize critical hardware components, such as
the SDRAM controller, I/O controllers and graphic 
controllers.
- Initializes system memory in preparation for passing
control to the operating system.
- Allocate system resources, such as memory and interrupt
circuits to peripheral controllers, as necessary.
- Provides a mechanism for locating and loading your
operating system image.
- Loads and passes control to the operating system,
passing any required startup information. This can
include total memory size, clock rates, serial ports
speeds and other low-level hardware-specific
configuration data.

**What is DMA?**

Direct Memory Acess

**What is a watchdog timer?**

**Synchronization techqniques**

Mutex vs Semaphores

**Object Oriented Programming in C** - check this link http://vger.kernel.org/lkml/#s15-3

**Cross-Compiling**
