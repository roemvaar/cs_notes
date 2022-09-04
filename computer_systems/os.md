# Operating Systems

An operating system (OS) is system software that manages computer hardware, software resources, and provides common services for computer programs.
An OS is a body of software that is responsible for making it easy to run programs (even allowing you to seemingly run many at the same time), allowing
programs to share memory, enabling programs to interact with devices, and other fun stuff like that. The OS is in charge of making sure the system
operates correctly and efficiently in an easy-to-use manner.

According to [2], the operating system is considered the parts of the system responsible for basic use and administration.
This includes the kernel and device drivers, boot loader, command shell or other user interface, and basic file and system
utilities. It is the stuff you need - not a web browser or music players.

On protected memory systems, the kernel has special "privilages" compared to user applications. This includes a protected
memory space and full access to the hardware, called "kernel space". User applictions execute in "user-space". Applications
running in user-space communicate with the kernel via system calls.

![syscall](../img/syscall.png)

When an application executes a system call, we say that the kernel is executing on behalf of the application. Furthermore,
the application is said to be executing a system call in kernel-space, and the kernel is running in process context.

Operating Systems can be divided in three logical topics in order to be studied:

1. **Virtualization**
2. **Concurrency**
3. **Persistence**


**OS Basic Topics to Learn:**

 - Processes and Threads: resources a process and a thread needs
 - Process Scheduling

 - Synchronization Mechanisms: 
 
Mutex/spinlock/semaphore

To provide synchronization, the kernel can disable interrupts.

 - Memory Management: virtual memory/paging/translation
 - Concurrency Issues: race conditions, deadlock and livelock and how to avoid them
 - Producer and Consumer Problem
 - Caching: cache coherency/cache line
 - Memory mapped IO/ IO Mapped IO
 - Context Switch: how context switch works, how it's initiated by the OS and underlying hardware - in ARM and x86
 - IPC - Inter Process Communications
 - Multicore: fundamentals of concurrency constructs
 
 - Interrupts: 
 
 When hardware wants to communicate with the system, it issues an interrupt that literrally interrupts
 the processor, which in turn interrupts the kernel. A number identifies interrupts and the kernel uses this number
 to execute a specific interrupt handler to process and respond to the interrupt.

 In many OSs (including Linux), the interrupts don't run in process context. They run in an special interrupt context,
 that is not associated with any process.

## Virtualization

Virtualization of the CPU and memory. Turning a single CPU (or small set of them) into a seemingly infinite number of
CPUs and thus allowing many programs to seemingly run at once is what we call **virtualizing the CPU**.

```
"Let us take the most basic of resources, the CPU. Assume there is one physical CPU in a system (though now there are 
often two or four or more). What virtualization does is take that single CPU and make it look like many virtual CPUs to
the applications running on the system. Thus, while each applications thinks it has its own CPU to use, there is really
only one. And thus the OS has created a beautiful illusion: it has virtualized the CPU" [OSTEP]
```

**Process**

One of the most fundamental abstractions that the OS provides to users: the process. The definition of a process, informally,
is quite simple: it is a running program. The program itself is a lifeless thing: it just sits there on the disk, a bunch of
instructions (and maybe some static data), waiting to spring into action. It is the operating system that takes these bytes and
gets them running, transforming the program into something useful.

Each process accesses its own private **virtual address space** or address space for short, which the OS somehow maps onto the
physical memory of the machine. That's why two running programs may be using the "same" address, e.g., 0x20000, but they're
completely different spaces in the actual physical memory.


## Concurrency

Concurrency - be able to run multiple applications at the "same" time


## Persistance

Persistence via devices and file systems. 


## Advanced Topics

- Networking
- Graphics
- Security

## Kernel

Typical components of a kernel are:

- Interrupt handlers to service interrupt requests
- A scheduler to share processor time among multiple processes
- A memory management system to manage process adress spaces
- System services such as networking and interprocess communication

### Resources

[1] [OSTEP](https://pages.cs.wisc.edu/~remzi/OSTEP/)
[2] Linux Kernel Development (3rd Edition), Roberto Love
