---
layout: default
title: Embedded
parent: Computer Systems
nav_order: 1
---

# Embedded Systems

**What is an embedded system?**

**Characteristics of an embedded system**

* Contains a processing engine, such as a general-purpose microprocessor.

* Typically designed for a specific application or purpose.

* Includes a single (or no) user interface.

* Often is resource-limited. For example, it might have a small memory footprint and no hard drive.

* Might have power limitations, such as requirements to operate from batteries.

* Not typically used as a general-purpose computing platform.

* General has application software built in, not user-selected.

* Ships with all intended application hardware and software pre-integrated.

* Often is intended for applications without human intervention.

**What is a microcontroller, microprocessor, SoC, and SoM?**

* Microprocessor

* Microcontroller

* SoC (System on Chip)

* SoM (System on Module)

**Basic processor architecture**

The ones most often found in embedded devices are Arm, MIPS, PowerPC, RISC-V, and x86, each in 32 and 64-bit variants, all with memory management units (MMU).

**Bootloaders**

A bootloader is a program in charge of initializing critical computer resources such as program memory and loading the OS into the memory.

How OS/Program is loaded?

Types of bootloaders:

Examples:

Tasks of a bootloader:

* Initialize critical hardware components, such as the SDRAM controller, I/O controllers and graphic controllers.

* Initializes system memory in preparation for passing control to the operating system.

* Allocate system resources, such as memory and interrupt circuits, to peripheral controllers as necessary.

* Provides a mechanism for locating and loading your operating system image.

* Loads the operating system, then passes control to it, passing any required startup information. This information can include total memory size, clock rates, serial port speeds and other low-level hardware-specific configuration data.

**Bare metal programming**

Infinite for loop.

**OS and RTOS concepts**

Difference between an OS and RTOS:

* OS (Operating System)

* RTOS (Real-Time Operating System)

Examples: FreeRTOS, QNX, VxWorks

**What is DMA?**

Direct Memory Acess

**Timers**

Time-Based - Hardware timers are key components of most microcontrollers. In addition to measuring the passage of time - for example, providing an alarm at regular intervals - timers are used to generate and decode complex pulse trains. A common use is generating a pulse-width modulated signal for motor speed control.

**What is a watchdog timer?**

**Synchronization techniques**

Mutex vs Semaphores

Synchronization techniques among threads by [IBM](https://www.ibm.com/docs/en/i/7.4?topic=techniques-synchronization-among-threads).

**Object Oriented Programming in C** - check this link http://vger.kernel.org/lkml/#s15-3

**Toolchains**

* Native: this toolchain runs on the same type of system (sometimes the actual system) as the program it generates.

* Cross: this toolchain runs on a different type of system than the target, allowing the development to be done on a fast desktop PC and then loaded onto the embedded target for testing. This process is known as cross-compiling.

**Cross-Compiling**

There are some common build systems, including the following:

* Pure Makefiles, where the toolchain is usually controlled by the make variable CROSS_COMPILE

* The GNU build system known as Autotools

* CMake (https://cmake.org)

Autotools and makefiles are needed to build a basic embedded Linux system. CMake is cross-plaform.

**Schematic basics** 

How to read and understand schematics?

**Hardware Debugging tools, Oscilloscope, Multimeter, Logic Analyzer, JTAG**

**Debugging**

[Debugging](https://roemvaar.github.io/computer_science_notes/docs/computer_systems/debugging.html).

**Communication Interfaces / Devices**

**Embedded Peripherals / Interfaces:**

* I2C - synchronous serial interface
* GPIO
* Analog - ADC, DAC
* USB
* SPI - synchronous serial interface - (complex) LCD, SD flash memory card, (simple) EEPROM)

**External Communication Interfaces / Devices:**

* CAN
* LIN
* Ethernet
* Wi-Fi
* Bluetooth
* GPS
* UART
