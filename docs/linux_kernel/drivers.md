---
layout: default
title: Device Drivers
parent: Linux Kernel
nav_order: 1
---

# Device Drivers

Most of the fundamental driver operations involve three important kernel data structures, called file_operations, file, and inode.

The kernel code can be logically separated into core kernel code and device driver code. Device driver code is responsible for accessing particular devices, while the core kernel code is generic. 

Char and block devices are accessed by filesystem nodes in the /dev directory. Block drivers have a completely different interface from the kernel's char drivers.

Device number registration is one of the first steps that driver code must carry.

* When you create a device file (like /dev/tty0 or /dev/sda1), it is associated with a combination of a major and minor number.

* The major number tells the kernel which driver will handle operations on that device.

* The minor number tells the driver which specific device or function to handle within the context of the major number.

## Character Devices

A character (char) device is one that can be accessed as a stream of bytes (like a file); a char driver is in charge of implementing this behaviour. Such a driver usually implements at least the **open, close, read, and write system calls**.

The only relevant difference between a char device and a regular file is that you can always move back and forth in the regular file, whereas most char devices are just data channels, which you can only access sequentially.

## Block Devices

Block devices are hardware devices distinguished by the random access of fixed-size chunks of data. A block device is a device (e.g., a disk) that can host a filesystem.

Linux allows the application to read and write a block device like a char device - it permits transferring any number of bytes simultaneously.

Block and char devices **differ only** in how data is managed internally by the kernel and thus in the kernel/driver software interface.

## Network Interfaces

Any network transaction is made through an interface, a device that can exchange data with other hosts.

Usually, an interface is a hardware device, but it might also be a pure software device, like the loopback interface. A network interface is in charge of sending and receiving data packets, driven by the kernel's network subsystem, without knowing how individual transactions map to the actual packets being transmitted.

Network devices are designed around the transmission and receipt of packets. A network driver knows nothing about individual connections, it only handles packets.

Communication between the kernel and a network device driver differs completely from that used with char and block drivers. Instead of read and write, the kernel calls functions related to packet transmission.
