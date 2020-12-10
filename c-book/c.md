# C Programming Language

> These notes were taken from R&K C programming language book and are meant only for personal use

C is a general-purpose programming language. The language is not tied to any particular
operating system or machine. 

C provides a variety of data types. The fundamental data types are:

- Characters
- Integer numbers of several sizes
- Floating point numbers of several sizes

There are also derived data types, i.e. user defined data types, created with:

- Pointers
- Arrays
- Structures
- Unions

In C expressions are formed from operators and operands. 

Pointers provide for machine-independent address arithmetic.

C provides the fundamental control-flow constructions required for well-structured programs:

- Statement grouping
- Decision making (if-else)
- Selecting one of a set of possible cases (switch)
- Looping with the termination test at the top (while, for)
- Looping with the termination test at the bottom (do)
- Early loop exit (break)

Functions may return values of:

- Basic data types
- Structures
- Unions 
- Pointers

The function of a C program may exist in separate source files that are compiled separately,
e.g. using a header file.

A preprocessing step performs macro substitution on program text, inclusion of other source 
file, and conditional compilation.

Local variables are typically "automatic" or created anew with each invocation. Variables
may be:

- Internal to a function 
- External but known only within a single source file
- Visible to the entire program.

C has the basic philosophy that programmers know what they are doing; it only 
requires that they state their intentions explicitly.
