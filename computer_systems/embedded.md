# Embedded Systems

**What is an embedded system?**

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

**What is a microcontroller, microprocessor, SoC, and SoM?**

- Microprocessor:

- Microcontroller:

- SoC (System on Chip):

- SoM (System on Module):

**Basic processor architecture**

The ones most often found in embedded devices are Arm, MIPS, PowerPC, RISC-V, and
x86, each in 32 and 64-bit variants, all of which have memory management units (MMU).

**Bootloaders**

TODO: A bootloader is a program that is in charge of initialize critical computer
resources such as program memory and load the OS into the memory.

TODO: how OS/Program is loaded?

Types of bootloaders:

Examples:

Tasks of a bootloader:

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

**Bare metal programming**

Infinite for loop

**OS and RTOS concepts**

Difference between an OS and RTOS:

- OS (Operating System):

- RTOS (Real-Time Operating System):

Examples: FreeRTOS, QNX, VxWorks

**What is DMA?**

Direct Memory Acess

**What is a watchdog timer?**

**Synchronization techqniques**

Mutex vs Semaphores

**Object Oriented Programming in C** - check this link http://vger.kernel.org/lkml/#s15-3

**Toolchains**

- Native: this toolchain runs on the same type of system (sometimes the actual 
system) as the program it generates.

- Cross: this toolchain runs on a different type of system than the target, allowing
the development to be done on a fast desktop PC and then loaded onto the embedded target
for testing. This is known as cross-compiling.

**Cross-Compiling**

The are some common build systems, including the following:

    - Pure Makefiles, where the toolchain is usually controlled by the make variable CROSS_COMPILE
    - The GNU build system known as Autotools
    - CMake (https://cmake.org)

Both Autotools and makefiles are needed to build even a basic embedded Linux system. CMake is 
cross-plaform.

**Schematic basics** 

How to read and understand schematics?

**Hardware Debugging tools, Oscilloscope, Multimeter, Logic Analyzer, JTAG**

**Software Debugging Tools: GDB**

**Communication Interfaces/Devices**

**Embedded peripherals: I2C, MDIO, GPIO, ADC, DAC, MII, USB**

**External Communication Interfaces/Devices: CAN, LIN, Ethernet, Wi-Fi, Bluetooth, Modem, GPS, GMSL2**
