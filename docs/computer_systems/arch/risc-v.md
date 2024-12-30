---
layout: default
title: RISC-V
parent: Arch
nav_order: 1
---

# RISC-V

## What's RISC-V?

Open-source ISA.

## Privilege Levels in RISC-V

RISC-V defines three privilege levels as part of its base privileged architecture:

* Machine Mode (M-mode)

Highest privilege level. Direct control over the hardware, including the ability to access all CPU features. Typically used for firmware, bootloaders, and embedded bare-metal applications. Mandatory in all RISC-V implementations.

* Supervisor Mode (S-mode)

Intermediate privilege level. Used by operating systems and hypervisors to manage user-space applications. Optional but common in systems that run general-purpose OSes like Linux.


* User Mode (U-mode)

Lowest privilege level. Runs applications with limited access to hardware, relying on the operating system for resource management and protection. Optional but typical in multi-user systems.

RISC-V does not define additional privilege levels like hypervisor or secure mode in its base specification but allows for extensions to handle those scenarios.

