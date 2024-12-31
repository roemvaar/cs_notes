---
layout: default
title: Rust
parent: Computer Systems
nav_order: 1
---

# Rust

## Ownership and Borrowing

**Ownership** is a fundamental concept in Rust. Each value in Rust has a single owner. When the owner goes out of scope, the value is dropped (cleaned up).

**Borrowing** allows you to access data owned by another variable without taking ownership. Borrows have rules to prevent data corruption (e.g., multiple mutable borrows at the same time).

**References** are pointers that allow you to access data owned by other variables. They are immutable by default, but you can create mutable references.

## Functions

Use the `fn` keyword to define functions. Functions can take input parameters and return values. Functions can return a single value or a tuple of values.

Methods are functions associated with a specific data type (structs, enums).

## Modules and Crates

Modules organize code into logical units.

Crates are the building blocks of Rust projects. They can contain multiple modules.

`use` keyword brings items from other modules into scope.

## Structs and Enums

**Structs** are custom data structures that group related data together.

**Enums** allow you to define a type that can have a fixed set of values.

## Memory Management

Rust manages memory automatically, using the **stack** for local variables and the **heap** for dynamically allocated data.

Rust's ownership and borrowing system ensures that memory is freed when it's no longer needed, preventing memory leaks.

## Cargo

**Cargo** is Rust's build system and package manager.

`Cargo.toml` is a file that defines your project's dependencies and metadata.

`Cargo.lock` is a file that locks down the versions of your dependencies.

## Standard Library

`std` is Rust's standarad library, providing a wide range of utilities and data structures.

`io`: Input/output operations.

`fs`: File system operations.

`collections`: Data structures like vectors, hash maps, and sets.

`str`: String manipulation.

## Safety

**Memory Safety**: Rust prevents memory leaks and dangling pointers.

**Data Race Prevention**: Rust's ownership system prevents multiple threads from accessing the same data concurrently without proper synchronization.
