# C++

C++ is a compiled language. For a program to run, its source text has to be processed
by a compiler, producing object files, which are combined by a linker yielding an
executable program.

When we talk about portability in C++ programs, we refer to source code portability,
i.e. the source code can be succesfully compiled and run on a variety of systems.

C++ is a satically typed language. That is, the type of everyt entity (e.g. object,
value, name, and expression) must be known to the compiler at its point of use. The
type of an object determines the set of operations applicable to it.

Every C++ program must have exactly one global function named main(). The program
starts by executing that function.

## Functions

The main way of getting something done on C++ is to call a function. A function can't
be called unless it has been previously declared.

A function declaration gives the name of the function, the type of the value returned
(if any) and the number and types of the arguments that must be supplied in a call.

**Function overloading**: If two functions are defined with the same name, but with
different argument types, the compiler will choose the most appropiate function to
invoke for each call. If two functions could be called, but neither is better than
the other, the call is deemed ambiguous and the compiler gives an error.

## Types, Variables, and Arithmetic

Every name and every expression has a type that determines the operations that may be
performed on it.

A declaration is a statement that introduces a name into the program. It specifies a
type for the named entity:

- A _type_ defines a set of possible values and a set of operations (for an object)
- An _object_ is some memory that holds a value of some type
- A _value_ is a set of bits interpreted according to a type
- A _variable_ is a named object

C++ fundamental types: bool, char, int, double, unsigned

A char variable is of the natural size to hold a character on a given machine
(typically an 8-bit byte), and the sizes of other types are quoted in multiples of
the size of a char. The size of a type is implementation-defined and can be obtained
using the sizeof operator.

A constant cannot be left uninitialized and a variable should only be left
uninitialized in extremely rare circumstances. Don't introduce a name until you have
a suitable value for it.

## Scope and Lifetime

A declaration introduces its name into a scope:

- Local scope: a name declared in a function or lambda
- Class scope: a name is called a member name (or class member name) if it is
  defined in a class, outside any function, lambda, or enum class.
- Namespace scope: a name is called namespace member name if it is defined in
  a namespaces outside any function, lambda, class, or enum class.

A name not declared inside any other construct is called a global name and is said
to be in the global namespace.

**const**: means roughly "I promise not to change this value." This is used primarly
to specify interfaces, so that data can be passed to functions without fear of it
being modified. The compiler enforces the promise made by const.

## Pointers, Arrays and References

An array of elements of type char can be declared like this:

`char v[6]; // array of 6 characters`

A pointer can be declared like this:

`char *p; // pointer to character`

In declarations:

- [] means "array of"
- - means "pointer to".
- the unary suffix & means "reference to"

In an expression:

- prefix unary \* means "contents of"
- prefix unary & means "address of"

Arrays are 0-indexed.

A reference is similar to a pointer, except that you don't need to use a prefix

- to access the valued referred to by the reference. Also, a reference cannot be
  made to refer to a different object after its initialization.

A pointer variable can hold the address of an object of the appropiate type:

`char* p = &v[3] // p points to v's fourth element`
`char x = *p; // *p is the object that p points to`

Reference are useful for specifying function arguments.

`void sort(vector<double>& v); // sort v`

By using a reference, we ensure that for a call sort(my_vec), we do not copy
my_vec and that it really is my_vec that is sorted and not a copy of it.

We try to ensure that a pointer always points to an object, so that dereferencing it
is valid. When we don't have an object to point to or if we need to represent the
notion of "no object available" (e.g., for an end of a list), we give the pointer the
value _nullptr_ ("the null pointer"). There is only one _nullptr_ shared by all
pointer types:

`double* pd = nullptr;`
`Link<Record>* lst = nullptr; // pointer to a Link to a Record`
`int x = nullptr; // error: nullptr is a pointer not an integer`

In older code, 0 or NULL is typically used instead of nullptr. However, using nullptr
eliminates confusion between intergers (such as 0 or NULL) and pointers (such as nullptr).

## User-Defined Types

**Structs**

- . (dot): to access struct members through a name (and through a reference)
- ->: to access struct members through a pointer

```c++
    void f(Vector v, Vector & rv, Vector* pv)
    {
        int i1 = v.sz;      // access through name
        int i2 = rv.sz;     // access through reference
        int i4 = pv->sz;    // access through pointer
    }
```

**Classes**

Having the data specified separately from the operations on it has advantages. However, a tighter
connection is something needed. In case that we want to keep the representation inaccesible to users,
so as to ease use, guarantee consistent use of the data, and allow us to later improve the representation.

To accomplish this, we have to distinguish between the interface to a type (to be used by all) and its
implementation (which has access to the otherwise inaccesible data). The language mechanism for that is
called a class.

A class is defined to have a set of _members_, which can be data, function, or type members. The
interface is defined by the public members of a class, and private members are accessible only though
that interface.

Example of a class:

```cpp
    class Vector {
    public:
        Vector(int s) :elem{new double[s]}, sz{s} { } // constr uct a Vector
        double& operator[](int i) { return elem[i]; } // element access: subscripting
        int size() { return sz; }
    private:
        double∗ elem; // pointer to the elements
        int sz; // the number of elements
    };
```

![vector](./img/vector.jpg)

## Declaration vs Definition

The first and most important step is to distinguish between the interface to a part
and its implementation.

- Declaration

At the language level, C++ represents interfaces by declarations. A declaration
specifies all that's needed to use a function or a type.

```cpp
    double sqrt(double num)  // the square root function takes a double and returns a double
```

- Definition

The key point here is that the function bodies, the function definitions, are
"elsewhere", i.e., the implementation is done in another part of the program.

Functions defined in a class are inlined by default.

```cpp
double sqrt(double d) // definition of sqrt()
{
// ... algorithm as found in math textbook ...
}
```

## Modularity

- Header files (\*.h)

Typically, we place the declarations that specify the interface to a module in a
file with a name indicating its intended use

The declarations would be placed in a file \*.h, and users will include that file,
called a header file, to access that interface.

- Namespaces

In addition to functions, classes, and enumerations, C++ offers namespaces as a
mechanism for expressing that some declarations belong together and that their
names shouldn’t clash with other names.

## Concrete Type vs Abstract Type

- Concrete types: their representation is part of their definition. In that, they
  resemble built-in types

- Abstract types: is a type that completely insulates a user from implementation
  details. Example:

```cpp
    class Container {
    public:
        virtual double& operator[](int) = 0; // pure virtual function
        virtual int size() const = 0; // const member function
        virtual ~Container() {} // destructor
    };
```

This class is a pure interface to specific containers defined later. The word
virtual means "may be redefined later in a class derived from this one."
Unsurprisingly, a function declared virtual is called a virtual function.
The curious =0 syntax says the function is pure virtual; that is, some class
derived from Container must define the function. A class with a pure virtual
function is called an abstract class.

## Class Hierarchy

A class hierarchy offers two kinds of benefits:

- Interface inheritance: An object of a derived class can be used wherever an object
  of a base class is required. That is, the base class acts as an interface for the
  derived class.

- Implementation inheritance: A base class provides functions or data that simplifies
  the implementation of derived classes. Such base classes often have data members and
  constructors.

## Class - Essential Operations

Construction of objects plays a key role in many designs. This wide variety of uses
is reflected in the range and flexibility of the language features supporting
initialization.

Constructors, destructors, and copy and move operations for a type are not logically
separate. We must define them as a matched set or suffer logical or performance
problems. If a class X has a destructor that performs a nontrivial task, such as
free-store deallocation or lock release, the class is likely to need the full
complement of functions:

```cpp
    class X {
    public:
        X(Sometype); // "ordinary constructor": create an object
        X(); //default constructor
        X(const X&); // copy constructor
        X(X&&); //move constructor
        X& operator=(const X&); // copy assignment: clean up target and copy
        X& operator=(X&&); // move assignment: clean up target and move
        ~X(); //destructor: clean up
        // ...
    };
```

## Class - Constructor and Destructor

Clearly, arranging code into classes and data into objects is a powerful organizing
principle. Clearly also, dealing in classes and objects is inherently no less
efficient than dealing with functions and data compared with C. Constructors and
destructors, in C++, a constructor is a member function that is guaranteed to be
called when an object is instantiated or created. This typically means that the
compiler generates a constructor call at the point where the object is declared.
Similarly, a destructor is guaranteed to be called when an object goes out of
scope.So a constructor typically contains any initialization that an object needs
and a destructor does any tidying up needed when an object is no longer needed.
