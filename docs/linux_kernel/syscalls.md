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

Syscall-entry code starts in assembly code and calls out into low-level C code after establishing low-level architecture-specific state and stack frames. This low-level C code must not be instrumented. A typical syscall handling function invoked from low-level assembly code looks like this:

```c
noinstr void syscall(struct pt_regs *regs, int nr)
{
   arch_syscall_enter(regs);
   nr = syscall_enter_from_user_mode(regs, nr);


   instrumentation_begin();
   if (!invoke_syscall(regs, nr) && nr != -1)
       result_regs(regs) = __sys_ni_syscall(regs);
   instrumentation_end();


   syscall_exit_to_user_mode(regs);
}
```

Do not nest syscalls.

## Explain how ioctl works internally

ioctl (input/output control) is a system call for device-specific I/O operations and other operations which cannot be expressed by regular file semantics. It takes a parameter specifying a request code; the effect of a call depends completely on the request code. Request codes are often device-specific.

Userspace applications typically make requests to the kernel by means of system calls. System calls are sometimes inappropriate for accessing non-standard hardware peripherals. Device drivers are modules that extend the kernel capabilities and help accessing hardware peripherals. An ioctl interface is a single system call by which userspace may communicate with device drivers.

Uses: hardware device configuration, terminal I/O, kernel extensions.
