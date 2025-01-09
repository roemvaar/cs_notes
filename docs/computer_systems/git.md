---
layout: default
title: Git
parent: Computer Systems
nav_order: 1
---

# Git

Git is a distributed version control system (VCS) designed to track changes in source code and facilitate collaboration among developers. Created by Linus Torvalds, Git is widely used in software development for its speed, reliability, and support for non-linear workflows.

## Key Features

- **Distributed Architecture**: Each developer's local repository is a full copy of the project.
- **Branching and Merging**: Create, switch, and merge branches for parallel development.
- **Commit History**: Keep a detailed log of changes over time.
- **Staging Area**: Prepare changes for commit with finer control.
- **Conflict Resolution**: Tools to handle merge conflicts effectively.

## Common Commands

- `git init` - Initialize a new Git repository.
- `git clone <url>` - Clone an existing repository.
- `git add <file>` - Stage changes for commit.
- `git commit -m "message"` - Commit staged changes with a message.
- `git status` - Show the current status of the repository.
- `git log` - View the commit history.
- `git branch` - List, create, or delete branches.
- `git checkout` - Switch branches or restore files (e.g., `git checkout main`).
- `git merge <branch>` - Merge another branch into the current one.
- `git pull` - Fetch and merge changes from a remote repository.
- `git push` - Upload changes to a remote repository.

## Example Workflow

1. **Initialize or Clone a Repository**:
    ```bash
    git init
    git clone <repository-url>
    ```

2. **Work on Changes**:
    - Edit files and save them.
    - Stage changes:
      ```bash
      git add <file>
      ```
    - Commit changes:
      ```bash
      git commit -m "Description of changes"
      ```

3. **Push to Remote Repository**:
    ```bash
    git push origin main
    ```

4. **Collaborate**:
    - Pull changes from others:
      ```bash
      git pull
      ```
    - Resolve conflicts if necessary and commit.

## Key Concepts

- **Repository**: A project's complete history of changes.
- **Branch**: An independent line of development.
- **Commit**: A snapshot of changes in the repository.
- **Remote**: A hosted version of the repository (e.g., GitHub, GitLab).
- **HEAD**: The current branch or commit being worked on.

## Example Branching Workflow

1. Create and switch to a new branch:
    ```bash
    git branch feature-branch
    git checkout feature-branch
    ```
2. Make changes, then stage and commit:
    ```bash
    git add .
    git commit -m "Implement feature"
    ```
3. Merge the feature branch into the main branch:
    ```bash
    git checkout main
    git merge feature-branch
    ```

## Useful Resources

- **Git Documentation**: [git-scm.com/doc](https://git-scm.com/doc)
- **Pro Git Book**: Free and comprehensive [Pro Git book](https://git-scm.com/book/en/v2).
- **Interactive Tutorials**: Websites like [learngitbranching.js.org](https://learngitbranching.js.org).
