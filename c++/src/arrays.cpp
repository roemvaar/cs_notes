/*
 * arrays.cpp - base class providing a static array implmentation
 *
 * Array implementation from scratch using OOP with C++ by Roberto Valenzuela
 *
 */

#include "../include/arrays.h"


// build(size) - create fixed-size array
// MyArray(int size)
// {

// }


//build(size, value) - create fixed-size array, initializes all positions with value
// MyArray(int size, int value) {

// }


// len() - returns n
int MyArray::len()
{
    std::cout << "len()" << std::endl;
}


// traverse() - output all elements of the array from pos 0 to size - 1
void MyArray::traverse()
{
    std::cout << "traverse()" << std::endl;
}


// get_at(idx) - return xi (index i)
int MyArray::get_at(int index)
{
    std::cout << "get_at()" << std::endl;
}


// set_at(idx, value) - adds value at position idx
void MyArray::set_at(int index, int value)
{
    std::cout << "set_at()" << std::endl;
}


// get_first()
void MyArray::get_first(int index, int value)
{
    std::cout << "get_first()" << std::endl;
}


// get_last()
void MyArray::get_last()
{
    std::cout << "get_last()" << std::endl;
}


// set_first(value)
void MyArray::set_first(int value)
{
    std::cout << "set_first()" << std::endl;
}


// set_last(value)
void MyArray::set_last(int value)
{
    std::cout << "set_last()" << std::endl;
}
