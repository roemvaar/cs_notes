# C Programming Language

1. C data types

2. What's a pointer? What's its size?

3. Null pointer and void pointer

4. Compilation stages - what happens at each stage?

Preprocessors, compiler, assembler, and linker

5. Difference between a switch and an if statement

6. Common problems - segmentation fault, memory leaks

7. C reserved words - private, volatile, static, etc. for both variables and functions.

8. Pointers to functions

9. **Libraries**

Libraries are collections of precompiled functions that have been written to be reusable. Typically,
they consists of sets of related functions to perform a common task. 

The C compiler (or more exactly, the linker) needs to be told which libraries to search, because
by default it searches only the standard C library.

A library filename always starts with lib. Then follow the part indicating what library this is (like c for the C library,
or m for the mathematical library). The last part starts with a dot (.), and specifies the type of library:

  - .a for static libraries
  - .so for shared libraries

The simplest form of library is just a collection of object files kept together in a ready-to-use form.
When a program needs to use a function stored in the library, it includes a header file that
declares the function. The compiler and linker take care of combining the program code and the library
into a single executable program. You must use the -l option to indicate which libraries other than
the standard C runtime library are required.

  - **Static libraries**, also known as archives, conventionally have names that end with .a. Example,
    /usr/lib/libc.a for the standard C library. You can create your own static libraries using ar (for archive) program 
    and compiling functions separately with gcc -c. [Example of a static library](https://github.com/roemvaar/algos-and-ds/tree/master/books/linux-programming/libraries)
