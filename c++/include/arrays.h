/*
 * arrays.h - base class providing a static array implmentation
 *
 * Array implementation from scratch using OOP with C++ by Roberto Valenzuela
 * 
 * Supported operations:
 *
 * - build(size) - create fixed-size array
 * - build(size, value) - create fixed-size array, initializes all positions with value
 * - len() - returns n
 * - traverse() - output all elements of the array from pos 0 to size - 1
 * - get_at(idx) - return xi (index i)
 * - set_at(idx, value) - adds value at position idx
 * - get_first()
 * - get_last()
 * - set_first(value)
 * - set_last(value)
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
    void get_first(int index, int value);
    void get_last();
    void set_first(int value);
    void set_last(int value);

private:
    const int maxArraySize = 1000;
};

#endif /* ARRAYS_H */
