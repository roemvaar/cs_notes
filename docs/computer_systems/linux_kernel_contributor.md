---
layout: default
title: Linux Kernel Contributor
parent: Computer Systems
nav_order: 1
---

# Linux Kernel Contributor

## Clone kernel 

```
    git clone <linux_website>
```

## Configure git

### Setting up email client

Use ```git send-email``` for sending patches. In your ```~/.gitconfig``` add the
following information:

```
    [sendemail]
        smtpuser = youremail@gmail.com
        smtpserver = smtp.googlemail.com
        smtpencryption = tls
        smtpserver = 587
```

Configure app password on gmail https://support.google.com/mail/answer/185833?hl=en-GB.

## Make fixes to sources

### Create commit message

## Create patch

Before sending the patch, you first have to make sure it complies
with the kernel development guidelines using:

```
    ./scripts/check_patch <patch_name>
```

## Send patch through email

Inspo: http://nickdesaulniers.github.io/blog/2017/05/16/submitting-your-first-patch-to-the-linux-kernel-and-responding-to-feedback/
