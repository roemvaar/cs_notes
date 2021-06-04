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
    and compiling functions separately with gcc -c. [Example of a static library](). For futher information how to
    create a shared library check Introduction to Programming Linux book p.11. One disadvantage of static libraries is that
    when you run many applications at the same time and they all use functions from the same library, you may end up with many
    copies of the same functions in memory and indeed many copies in the program files themselves. This can consume a large
    amount of valuable memory and disk space. Shared libraries can overcome this disadvantage.

  - **Shared Libraries** have the so suffix, e.g., the shared version of the standard math library is /lib/libm.so. When a
    program uses a shared library, it is linked in such a way that it doesn't contain function code itself, but references to
    shared code that will be made available at run time. When the resulting program is loaded into memory to be executed, the
    function references are resolved and calls are made to the shared library, which will be loaded into memory if needed. In
    this way, the system can arrange for a single copy of a shared library to be used by many applications at once and stored
    just once on the disk. An additional benefit is that the shared library can be updated independently of the applications
    that rely on it.

    In Linux, the program (dynamic loader) that takes care of loading shared libraries and resolving client program functions
    references is called ld.so.


10. Keywords - const (in parameters), extern, static (functions, variables)
