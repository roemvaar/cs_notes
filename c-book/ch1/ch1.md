# Chapter 1 - A Tutorial Introduction

The only way to learn a new programming language is by writing programs in it.

A C program consists of:

- Functions: Contains statements that specify the computing operations to be done
- Variables: Store values during the computation

You are at the liberty to give functions whatever name you like, but you have to specify
'main' - is a special function - because your program begins executing at the beginning 
of main. Every program must have a main.

Main will usually call other functions to complete its job. One method of communicating 
data between functions is for the calling function to provide a list of values, called arguments.

The statements of a function are enclosed in braces {}.

If an arithmetic operator has integer operands, an integer operation is performed.
If an arithmetic operator has one floating-point operand and one integer operand, however,
the integer will be converted to floating point before the operation is done. Writing
floating-point constants with explicit decimal points even when they have integral
values emphasizes floating-point nature for human readers.

The choice between *while* and *for* is arbitrary, based on which seems clearer.
The *for* is usually appropriate for loops in which the initialization and increment
are single statements and logically related, since it is more compact than *while* and
it keeps the loop control statements together in one place.

It's bad practice to bury "magic numbers" in a program; they convey little information to 
someone who might have to read the program later, and they are hard to change in a
systematic way. One way to deal with magic numbers is to give them meaningful names. 

A *#define* line defines a *symbolic name* or *symbolic constant* to be a particular string
of characters:

```c
    #define name replacement text
```

Thereafter, any occurrence of *name* will be replaced by the corresponding replacement
text. (At the preprocessing stage of the compilation process).

The model of input and output supported by the standard library is very simple. Text input
or output, regardless of where it originates or where it goes to, is dealt with as streams
of characters. A **text stream** is a sequence of characters divided into lines; each line
consists of zero or more characters followed by a new line character.

