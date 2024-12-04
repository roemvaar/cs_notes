---
layout: default
title: Security
parent: Linux Kernel
nav_order: 1
---

# Linux Kernel Security

Any security check in the system is enforced by kernel code. If the kernel has security holes, then the system as a whole has holes. When running an official kernel, only the superuser, or an intruder who has succeeded in becoming privileged, can exploit the power of privileged code.

Security is a policy that is often best handled at higher levels within the kernel, under the control of the system administrator.

The developer must be careful to avoid introducing security bugs.

The C programming language makes it easy to make several types of errors. Many current security problems are created.

* Buffer overrun errors: the programmer forgets to check how much data is written to a buffer, and data ends up written beyond the end of the buffer, thus overwriting unrelated data.

## Security tips to keep in mind:

* Any input received from user processes should be treated with great suspicion; never trust it unless you can verify it.

* Be careful with **uninitialized** memory. Avoid information leakage.

* Device operations that could affect the system should be restricted to privileged users.

* Avoid running kernels compiled by an untrusted party
    * For example, a maliciously modified kernel could allow anyone to load a module, thus opening an unexpected back door via **init_module**

It is possible to disable the loading of kernel modules after system boot via the capability mechanism.

## reactive response

## proactive development
