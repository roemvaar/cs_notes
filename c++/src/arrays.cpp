/*
 * arrays.cpp - base class providing a static array implmentation
 *
 * Array implementation from scratch using OOP with C++ by Roberto Valenzuela
 *
 */

#include "../include/arrays.h"
#include <cassert>


// build(size) - create fixed-size array
MyArray::MyArray(int size)
{
    assert(size < capacity);
    lenght = 0;
    std::cout << "Array succesfuly created" << std::endl;
}


//build(size, value) - create fixed-size array, initializes all positions with value
MyArray::MyArray(int size, int value)
{
    assert(size < capacity);
    lenght = size;
    std::cout << "Array succesfuly created" << std::endl;
}


// len() - returns n
int MyArray::len()
{
    return lenght;
}


// traverse() - output all elements of the array from pos 0 to size - 1
void MyArray::traverse()
{
    std::cout << "traverse()" << std::endl;
}


// get_at(idx) - return xi (index i)
int MyArray::get_at(int index)
{
    int elem = 0;
    std::cout << "get_at()" << std::endl;
    return elem;
}


// get_first()
int MyArray::get_first(int index, int value)
{
    int elem = 0;
    std::cout << "get_first()" << std::endl;
    return elem;
}


// get_last()
int MyArray::get_last()
{
    int elem = 0;
    std::cout << "get_last()" << std::endl;
    return elem;
}


// set_at(idx, value) - adds value at position idx
void MyArray::set_at(int index, int value)
{
    std::cout << "set_at()" << std::endl;
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


// Testing code
// TODO: Delete later 
int main()
{
    MyArray arr(5);
    std::cout << "Expected: 0 Actual: " << arr.len() << std::endl;
    //MyArray arr2(1001);

    MyArray arr3(10, 5);
    std::cout << "Expected: 10 Actual: " << arr3.len() << std::endl;
    MyArray arr4(249,0);
    std::cout << "Expected: 249 Actual: " << arr4.len() << std::endl;
    //MyArray arr5(1001, 0);

    return 0;
}
