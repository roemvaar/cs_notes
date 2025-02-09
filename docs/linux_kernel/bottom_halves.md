---
layout: default
title: Bottom Halves
parent: Linux Kernel
nav_order: 1
---

# Bottom Halves and Deferring Work

## Top Halves Versus Bottom Halves

It's imperative that the ![interrupt handler](./interrupts.md) runs quickly, to resume execution of the interrupted code as soon as possible.

Interrupt handlers need to **execute quickly** and **perform a large amount of work**. These two goals are conflict with one another. Because of these competing goals, the processing of interrupts is spit into two parts, or halves. The interrupt handler is the **top half**. Work that can be performed later is deferred until the **bottom half**.

## Bottom Halves

The bottom half runs in the future, at a more convenient time, with all the interrupts enabled. Linux provides various mechanisms for implementing bottom halves:

* **SoftIRQs:** run immediately in interrupt context.

* **Tasklets:** serve as lower-priority bottom halves for deferred work processing. Tasklets are scheduled and executed in a serialized manner to prevent concurrency issues. Tasklets are being **deprecated**.

* **Workqueues:** run in process context. Workqueues provide a way to handle non-time-critical tasks asynchronously outside interrupt context.

The primary criteria for differentiating the mechanisms are the context in which each runs.
