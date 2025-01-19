---
layout: default
title: Commands
parent: Computer Systems
nav_order: 1
---

# Commands

## Bash

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

## Git

``git checkout -b <branch_name>``

``git push --set-upstream origin <branch_name>``

``git format-patch -1 <sha>``

``./scripts/checkpatch.pl -f <file>``

``./scripts/checkpatch.pl <patch>``

``git send-email <patch>``
