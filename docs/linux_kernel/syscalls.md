---
layout: default
title: System Calls
parent: Linux Kernel
nav_order: 1
---

# System Calls

System calls are a set of APIs the kernel offers to the applications. Syscalls are used by applications to request a service from the OS. This may include hardware-related services, the creation and execution of new processes, and communication with integral kernel services such as process scheduling. System calls provide an essential interface between a process and the operating system.

System calls are a set of APIs offered by the kernel. These APIs are different from regular library APIs because they are the boundary at which the execution mode switches from user mode to kernel mode.

System calls are rarely changed to provide application compatibility.

Do not nest syscalls.
