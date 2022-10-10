# Commands

grep

find

## Git

git checkout -b <branch_name>

git push --set-upstream origin <branch_name>

git format-patch -1 <sha>

./scripts/checkpatch.pl -f <file>

./scripts/checkpatch.pl <patch>

git send-email <patch>

# Linux Kernel Modules

sudo insmod <module>.ko
sudo insmod args_module.ko name=roberto

sudo modprobe <module>
sudo rmmod <module>
sudo dmesg

sudo perf stat -e sched:sched_switch --timeout 1000

## Compress directory
tar -zcvf file.tar.gz /path/to/dir/

## Extract files
tar -xzvf file.tar.gz

## Copy files from one machine to another using ssh
scp <source> <destination>

## To copy a file from B to A while logged into B
scp /path/to/file username@a:/path/to/destination

## To copy a file from B to A while logged into A
scp username@b:/path/to/file /path/to/destination
