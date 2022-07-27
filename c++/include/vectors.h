/*
 * vectors.h - base class providing a "flexible" array implmentation, i.e., vectors in C++ STDLIB
 *
 * Vector implementation from scratch using OOP with C++ by Roberto Valenzuela
 * 
 * Supported operations:
 *
 * 1. build(size) - create fixed-size array
 * 2. build(size, value) - create fixed-size array, initializes all positions with value
 * 3. len() - returns n
 * 4. traverse() - output all elements of the array from pos 0 to size - 1
 * 5. get_at(idx) - return xi (index i)
 * 6. set_at(idx, value) - adds value at position idx
 *
 */


#ifndef VECTORS_H
#define VECTORS_H

#include <iostream>

// TODO:
// * Understand amortization of vectors and why is O(n)
// * Geometric series (check video min 45)

class MyVector 
{
public:
    MyVector();
    MyVector(int size);
    MyVector(int size, int value);
    ~MyVector() {};
    int len();
    void traverse();

private:
    int lenght;
};

#endif /* VECTORS_H */
