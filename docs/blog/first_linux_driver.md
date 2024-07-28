---
layout: default
title: Configuring Development System
parent: Blog
nav_order: 2
---

# Configuring Development System

## Getting Sources and Building

Nowadays for development, git is the only option (not really, but imo it's the best option).

```
git clone git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git linux_mainline
cd linux_mainline
make x86_64_defconfig
make kvm_guest.config
make -j32 all
```

## Boot on QEMU

If it's the first time booting, boot as "single" user in order to change root password
and create a user [3][4].

```
sudo qemu-system-x86_64 -kernel arch/x86/boot/bzImage -hda ../qemu-image.img -append "root=/dev/sda single"
```

After that:

```
qemu-system-x86_64 -kernel arch/x86/boot/bzImage -drive file=../qemu-image.img,index=0,media=disk,format=raw -append "root=/dev/sda console=ttyS0" --enable-kvm --nographic
```

To get out of QEMU:

```
shutdown -h now
```

## Test Bench

Options:

* Dedicated Laptop/PC for testing is the best way to go (native compilation) [1][2]
* VirtualBox
* QEMU [1]
* RaspberriPi
* Specialiazed hardware for your specific development


## Resources

[1] [Setting up QEMU-KVM for kernel development]( https://www.collabora.com/news-and-blog/blog/2017/01/16/setting-up-qemu-kvm-for-kernel-development/)

[2] [For Debian-based systems - Kernel Build](https://wiki.ubuntu.com/KernelTeam/GitKernelBuild)

[3] [Changing root password](https://askubuntu.com/questions/57620/getting-an-authentication-token-manipulation-error-when-trying-to-change-my-us)

[4] [Create user in Linux](https://linuxize.com/post/how-to-create-users-in-linux-using-the-useradd-command/)
