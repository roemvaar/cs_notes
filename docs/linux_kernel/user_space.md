---
layout: default
title: User Space
parent: Linux Kernel
nav_order: 1
---

# Kernel Space vs User Space

The kernel is the part of the operating system that runs with higher privileges while user (space) usually means by applications running with low privileges. However, these terms are heavily overloaded and might have specific meaning depending on the context.

User mode and kernel mode are terms that may refer specifically to the processor execution mode. Code that runs in **kernel mode** can fully control the CPU while code that runs in user mode has certain limitations. For example, CPU interrupts can only be disabled or enabled while running in kernel mode.

User space and kernel space may refer specifically to memory protection or to virtual address spaces associated with either kernel or user applications. Simplifying, the kernel space is the memory area that is reserved to the kernel while user space is the memory reserved to a particular user process. 

A module runs in **kernel space**, whereas applications run in **user space**. One of the roles of OSs is to account for independent operation of programs and protection against unauthorized access to resources. The OS enforces this behavior by implementing different operating modalities (or levels) in the CPU itself. All current processors have at least two protection levels. We refer to the execution modes as **kernel space** and **user space**.

## Explain how data is transferred between userspace and kernel space

Userspace applications typically make requests to the kernel by means of system calls, whose code lies in the kernel space. Unix transfers execution from user space to kernel space whenever an application issues a **system call** or is suspended by a **hardware interrupt**.

Kernel code executing a system call is working in the context of a process - it operates on behalf of the calling process and is able to access data in the process’s address space.

Code that handles interrupts is asynchronous with respect to processes and is not related to any particular process.

## When does the control pass from user mode to kernel mode in a Linux system?
