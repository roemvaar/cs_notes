# RTOS

### Important Topics

1. OS Concepts

    - Embedded OS
    
    Why use an OS? 
    
        - Manage shared resources
        - Manage CPU time
        - Deterministic behavior

    Types:
        
        - Non preemptive - while(1) loop 
        - Preemptive - task based, e.g. FreeRTOS

    - Scheduling no-preemption
    - Scheduling preemption

2. RTOS Components

    - Typical components
    - Threads
    - Memory management
    - Interrupts

3. RTOS Issues
    
    - Priority inversion
    - Deadlock
    - Starvation
    - CPU Loading
    - Sharing resources

**What is a Real-Time Operating System?**

**What's the difference between a general-purpose OS and a RTOS?**

**Real-Time Systems - Hard vs Soft**

A real-time system is a system that is required to react to stimuli from the environment
(including the passage of physical time) within time intervals dictated by the environment.
The Oxford Dictionary defines a real-time system as “any system in which the
time at which output is produced is significant.”

Correctness of a computation depends not only upon its results but also upon the
time at which its outputs are generated A real-time system must satisfy response time
constraints or suffer significant system consequences. If the consequences consist of
a degradation of performance, but not failure, the system is referred to as a soft realtime
system. If the consequences are system failure, the system is referred to as a hard
real-time system. (for instance, anti-lock braking systems in an automobile).
