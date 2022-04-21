# Operating Systems

TODO: OS definition

Main concepts:

1. **Virtualization**
2. **Concurrency**
3. **Persistence**

- **Processes and Threads:** resources a process and a thread needs
- **Process Scheduling:**
- **Synchronization Mechanisms:** mutex/spinlock/semaphore/monitor
- **Memory Management:** virtual memory/paging/translation
- **Concurrency Issues** race conditions, deadlock and livelock and how to avoid them
- **Producer and Consumer Problem:**
- **Caching:** cache coherency/cache line
- **Memory mapped IO/ IO Mapped IO**
- **How context switch works** - how it's initiated by the OS and underlying hardware - in ARM, x86 and RISC-V
- **IPC - Inter Process Communications**
- **Multicore** - Understand the fundamentals of concurrency constructs

 
 ## Virtualization
 
 **TO DO: READ OSTEP VIRTUALIZATION MATERIAL AND CREATE A SUMMARY IN THIS PAGE**

 Virtualization of the CPU and memory.
 
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
 
 ## Concurrency
 
 Concurrency - be able to run multiple applications at the "same" time
 
 ## Persistance
 
 Persistence via devices and file systems. 
 
 
 ## Advanced Topics
 
 
 - Networking
 - Graphics
 - Security
 
 ### Resources
 
 - [OSTEP](https://pages.cs.wisc.edu/~remzi/OSTEP/)
