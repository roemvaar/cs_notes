---
layout: default
title: Bottom Halves
parent: Linux Kernel
nav_order: 1
---

<!-- TODO: Get the actual deferred-work mechanisms from here: https://lwn.net/Articles/960041/ -->

# Bottom Halves and Deferring Work

**Three mechanisms used to defer work in the Linux kernel: softirqs, tasklets, and work queues.**

## Top Halves Versus Bottom Halves

It's imperative that the ![interrupt handler](./interrupts.md) runs quickly, to resume execution of the interrupted code as soon as possible.

Interrupt handlers need to **execute quickly** and **perform a large amount of work**. These two goals are conflict with one another. Because of these competing goals, the processing of interrupts is spit into two parts, or halves. The interrupt handler is the **top half**. Work that can be performed later is deferred until the **bottom half**.

Later is often simply not now. The point of a bottom half is not to do work at some specific point in the future, but simply to defer work until any point in the future when the system is less busy and interrupts are again enabled. Bottom halves run with all interrupts enabled.

Here are some useful tips on how to divide thw work between the top and bottom half:

* If the work is time sensitive, perform it in the interrupt handler.
* If the work is related to the hardware, perform it in the interrupt handler.
* If the work needs to ensure that another interrupt (particularly the same interrupt) does not interrupt it, perform it in the interrupt handler.
* For everything else, consider performing the work in the bottom half.

## Bottom Halves

Bottom half is a generic operating system term referring to the deferred portion of interrupt processing, so named because it represents the second, or bottom, half of the interrupt processing solution.

The job of the bottom halves is to perform any interrupt-related work not performed by the interrupt handler. The bottom half runs in the future, at a more convenient time, with all the interrupts enabled. 

The primary criteria for differentiating the mechanisms are the context in which each runs.

Another mechanism for deferring work is kernel timers.

Unlike the top half, which is implemented entirely via the interrupt handler, multiple mechanisms are available for implementing a bottom half. Currently, three methods exist for deferring work: softirqs, tasklets, and work queues.

## SoftIRQs

**SoftIRQs** run immediately in interrupt context. Softirqs are a set of statically defined bottom halves that can run simultaneously on any processor.

Softirqs are statically allocated at compile time. A softirq never preempts another softirq. The only event that can preempt a softirq is an interrupt handler. Usually, an interrupt handler marks its softirq for execution before returning.

Softirqs are reserved for the most timing-critical and important bottom-half processing on the system.

## Tasklets

**Tasklets** serve as lower-priority bottom halves for deferred work processing. Tasklets are scheduled and executed in a serialized manner to prevent concurrency issues. Tasklets are being **deprecated**. Tasklets are flexible, dynamically created bottom halves built on top of softirqs. For most bottom-half processing, the tasklet is sufficient. Tasklets are deprecated.

Tasklets are a legacy mechanism for handling softirqs (software interrupts) in the Linux kernel. Since workqueues provide better flexibility and control over scheduling, the kernel communicaty is moving away from tasklets.

Tasklets are a bottom-half mechanism built on top of softirqs. You almost always want to use tasklets.

Scheduled tasklets are stored in two per-processor structures `tasklet_vec` (for regular tasklets) and `tasklet_hi_vec` (for high-priority tasklets). Both of these structures are linked lists of `tasklet_struct` structures.

Tasklets also run with all interrupts enabled, so you must take precautions (for example, disable interrupts and obtain a lock) if your tasklet shares data with an interrupt handler. If your tasklet shares data with another tasklet or softirq, you need to use proper locking.

If the same tasklet is scheduled again, before it has had a chance to run, it still runs only once.

## Workqueues 

**Workqueues** run in process context. Workqueues provide a way to handle non-time-critical tasks asynchronously outside interrupt context.

Work queues defer work into a kernel thread - this bottom half always runs in process context. Work queues are schedulable and can therefore sleep. Normally, it is easy to decide between using work queues and softirqs/tasklets. If the deferred work needs to sleep, work queues are used.

## Which Bottom Half Should I Use?

