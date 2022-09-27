# Configuring Development System

## Download Sources

Nowadays for development, git is the only option (not really, but imo it's the best option).

## Build Options

* make inside a kernel tree for your current system (use current /)


## Test Bench

Options:

* Dedicated Laptop/PC for testing is the best way to go (native compilation) [1, 2]
* VirtualBox - obviously running a Linux-based system
* QEMU [1]
* RaspberriPi
* Specialiazed hardware for your specific development

## Areas to focus on

* Kernel selftest framework - kselftest*
* Kunit*
* Documentation*
* Perf tools*

\* low hanging fruit

## Resources

[1] [Setting up QEMU-KVM for kernel development]( https://www.collabora.com/news-and-blog/blog/2017/01/16/setting-up-qemu-kvm-for-kernel-development/)

[2] [For Debian-based systems - Kernel Build](https://wiki.ubuntu.com/KernelTeam/GitKernelBuild)
