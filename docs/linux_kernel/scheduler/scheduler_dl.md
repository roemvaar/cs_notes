---
layout: default
title: DL
parent: Scheduler
nav_order: 1
---

# Deadline Scheduler (DL)

`struct sched_dl_entity`

Deadline Scheduling Class (SCHED_DEADLINE) defined in [kernel/sched/deadline.c](https://elixir.bootlin.com/linux/v6.11/source/kernel/sched/deadline.c).

Earliest Deadline First (EDF) + Constant Bandwidth Server (CBS).

<!-- How does this work on the latest kernel? With PREEMPT-RT fully merged. -->
