---
layout: default
title: Bash
parent: Computer Systems
nav_order: 1
---

# Bash (Bourne Again SHell)

Bash is a command-line interpreter and scripting language widely used on Unix-based systems, including Linux and macOS. It is the default shell for many Linux distributions and provides powerful tools for automating tasks, managing files, and interacting with the operating system.

## Key Features

- **Command History**: Stores previously executed commands for recall using `history`.
- **Tab Completion**: Auto-completes commands, file names, and directory paths.
- **Environment Variables**: Stores system-wide or session-specific settings (e.g., `PATH`, `HOME`).
- **Pipelines and Redirection**: Combines commands and directs input/output using `|`, `>`, and `<`.
- **Scripting**: Supports writing scripts to automate repetitive tasks using loops (`for`, `while`), conditionals (`if`, `case`), and functions.

## Common Commands

- `ls` - List directory contents.
- `cd` - Change the current directory.
- `pwd` - Print the current working directory.
- `echo` - Display text or variables.
- `grep` - Search for patterns in text.
- `find` - Search for files and directories.
- `chmod` - Change file permissions.
- `man` - Display manual pages for commands.

## Example Script

```bash
#!/bin/bash
# A simple script to print "Hello, World!"
echo "Hello, World!"
```
