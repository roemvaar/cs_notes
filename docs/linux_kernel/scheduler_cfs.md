---
layout: default
title: CFS
parent: Scheduler
nav_order: 1
---

# Completely Fair Scheduler (CFS)

## Implementation of CFS

`kernel/sched/fair.c`

## Time Accounting

All process schedulers must account for the time that a process runs. Linux keeps account for the time that each process runs, because it needs to ensure that each process runs only for its fair share of the processor. CFS uses the **scheduler entity structure**, `struct sched_entity` in `include/linux/sched.h`, to keep track of process accounting. The scheduler entity structure is embedded in the process descriptor, `struct task_struct`, as a member variable named se.

### Virtual Runtime (vruntime)

The vruntime variable stores the virtual runtime of a process, which is the actual runtime (the amount of time spent running) normalized (or weighted) by the number of runnable processes. The virtual runtime’s units are nanoseconds. CFS uses vruntime to account for how long a process has run and thus how much longer it ought to run.

The function [update_curr()](https://elixir.bootlin.com/linux/v6.11/source/kernel/sched/fair.c#L1156) in **`kernel/sched/fair.c`** mannages this accounting. `update_curr()` calculates the execution time of the current process and stores that value in `delta_exec`. The current process’s `vruntime` is then incremented by the weighted value.

**`update_curr()` is invoked periodically by the system timer and also whenever a process becomes runnable or blocks, becoming unrunnable.** In this manner, vruntime is an accurate measure of the runtime of a given process and an indicator of what process should run next. 

On real hardware, we can run only a single task at once, thus we introduce the concept of “virtual runtime”. The virtual runtime of a task specifies when its next timeslice would start execution on the ideal multitasking CPU. In practice, the virtual runtime of a task is its actual runtime normalized to the total number of running tasks.

In CFS the virtual runtime is expressed and tracked via the per-task p->se.vruntime (nanosec-unit) value. This value represents how much CPU time the task has used. This way, it’s possible to accurately timestamp and measure the “expected CPU time” a task should have gotten.

The vruntime is incremented based on the actual time a task runs, but tasks with lower priority (i.e.,nice values) will have their runtime increased faster, so higher priority tasks (with lower nice values) get more CPU time.

## Process Selection

**When CFS is deciding what process to run next, it picks the process with the smallest vruntime.** This is the core of CFS’s scheduling algorithm.

CFS’s task picking logic is based on this p->se.vruntime value and it is thus very simple: it always tries to run the task with the smallest p->se.vruntime value (i.e., the task which executed least so far). CFS always tries to split up CPU time between runnable tasks as close to “ideal multitasking hardware” as possible.

### Red-Black Tree (rbtree)

CFS uses a **red-black tree** to manage the list of runnable processes and efficiently find the process with the smallest vruntime. A red-black tree, called an **rbtree** in Linux, is a type of **self-balancing binary search tree**. Red-black trees are a data structure that store **nodes** of arbitrary data, identified by a specific **key**, and that enable efficient search for a given **key**. Specifically, obtaining a node identified by a given key is logarithmic in time as a function of total nodes in the tree.

Tasks are stored in a time-ordered (sorted based on their vruntime) rbtree to build a “timeline” of future task execution. The task with the smallest vruntime (i.e., the task that has used the least CPU time compared to the other tasks) is always selected to run next.

This ensures that tasks that have not had a chance to run for a while are favored to get scheduled soon, ensuring fairness.

CFS’s process selection algorithm is thus summed up as “run the process represented by the leftmost node in the rbtree.
