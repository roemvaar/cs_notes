---
layout: default
title: Commands
parent: Computer Systems
nav_order: 1
---

# Commands

### Bash

``grep``

``find``

``watch`` - repeat command

Run rsync of a large file over ssh

* Compress directory

``tar -zcvf file.tar.gz /path/to/dir/``

* Extract files

``tar -xzvf file.tar.gz``

* Copy files from one machine to another using ssh

``scp <source> <destination>``

* To copy a file from B to A while logged into B

``scp /path/to/file username@a:/path/to/destination``

* To copy a file from B to A while logged into A

``scp username@b:/path/to/file /path/to/destination``

### Git

``git checkout -b <branch_name>``

``git push --set-upstream origin <branch_name>``

``git format-patch -1 <sha>``

``./scripts/checkpatch.pl -f <file>``

``./scripts/checkpatch.pl <patch>``

``git send-email <patch>``

### Linux Kernel Development

* Apply patches:

```patch -p1 < file.patch```

```git apply --index file.patch```

note: Prefer git apply in order to track new files that may be
contained in the git patch

* Compiling a single source file: make path/file.o

```make drivers/media/test-drivers/vimc/vimc-core.o```

* Compiling at the directory level: make path

```make drivers/media/test-drivers/vimc/```

* Compile file as module, e.g., ```vimc```:

```make M=drivers/media/test-drivers/vimc```

note: It's better to use ```make menuconfig``` to configure the file
as a module because of all the dependencies.

``sudo insmod <module>.ko``

``sudo insmod args_module.ko name=roberto``

``sudo modprobe <module>``

``sudo rmmod <module>``

``sudo dmesg``

Count context switches:

``sudo perf stat -e sched:sched_switch --timeout 1000``
