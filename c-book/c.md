# C Programming Language

> These notes were taken from R&K C programming language book and are meant only for personal use

C is a general-purpose programming language. The language is not tied to any particular
operating system or machine. 

C provides a variety of data types. The fundamental data types are:

| Data types | Description |
| ---------- | ----------- |
| char       | character - a single byte |
| int        | integer     |
| short      | short integer |
| long       | long integer |
| float      | floating point number |
| double     | double-precision floating point |

The sizes of these objects are machine-dependent.

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

In C, all variables must be declared before they are used. A declaration announces the
properties of variables; it consists of a type name and a list of variables, such as:

```c
    int fahr;
    float interest;
```

Local variables are typically "automatic" or created anew with each invocation. Variables
may be:

- Internal to a function 
- External but known only within a single source file
- Visible to the entire program.

C has the basic philosophy that programmers know what they are doing; it only 
requires that they state their intentions explicitly.

**Functions**

In C, a function provides a convenient way to encapsulate some computation, which can be used
without worrying about its implementation. With properly designed functions, it is possible to
ignore how a job is done; knowing what is done is sufficient. C makes the use of functions easy,
convenient and efficient; you will often see a short function defined and called only once, just
because it clarifies some piece of code.


