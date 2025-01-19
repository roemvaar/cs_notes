---
layout: default
title: Patches
parent: Development
nav_order: 1
---

# Patches

## Clone kernel

A good rule of thumb is to start by cloning the `mainline` branch:

```bash
git clone https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git
```

## Configure git

### Setting up email client

Use ```git send-email``` for sending patches. In your ```~/.gitconfig``` add the
following information:

```
[sendemail]
    smtpuser = <your_email>@gmail.com
    smtpserver = smtp.googlemail.com
    smtpencryption = tls
    smtpserver = 587
```

Make sure to change `<your_email>` with your actual email. More information on how to configure the application password on the [Gmail documentation](https://support.google.com/mail/answer/185833?hl=en-GB).

## Make fixes to sources

### Create commit message

```bash
git commit
```

## Create patch

```bash
git format-patch HEAD -1
```

Before sending the patch, you first have to make sure it complies with the kernel development guidelines using:

```bash
./scripts/checkpatch.pl <patch_name>
```

## Send patch through email

A more detailed tutorial can be found [here](http://nickdesaulniers.github.io/blog/2017/05/16/submitting-your-first-patch-to-the-linux-kernel-and-responding-to-feedback/).
