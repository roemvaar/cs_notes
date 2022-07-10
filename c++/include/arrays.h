/*
 * arrays.h - base class providing a static array implmentation
 *
 * Array implementation from scratch using OOP with C++ by Roberto Valenzuela
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

#ifndef ARRAYS_H
#define ARRAYS_H

#include <iostream>

/* TODO:
 * 1. Implement operations using ints
 * 2. Add templates to support different data types
 */

class MyArray 
{
public:
    MyArray(int size) {};
    MyArray(int size, int value) {};
    ~MyArray();
    int len();
    void traverse();
    int get_at(int index);
    void set_at(int index, int value);
    
private:
    const int maxArraySize = 1000;
};

#endif /* ARRAYS_H */
