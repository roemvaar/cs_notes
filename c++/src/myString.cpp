#include <iostream>
#include "myString.h"

using namespace std;

void Application::init(int argc, char* argv[])
{
	setArgs(argc, argv);
	init();
}

// Constructor 
MyString(){};

// Destructor
~MyString();


void MyString::begin() {

}

void MyString::end() {

}

/* length() - Return length of string
 * Returns the length of the string, in terms of bytes.
 * 
 * This is the number of actual bytes that conform the contents of the string, 
 * which is not necessarily equal to its storage capacity.
 * 
 * Both MyString::size and Mystring::length are synonyms and return the same value.
 */
size_t MyString::length() {
    return 0;
}

/* size() - Return length of string
 * Returns the length of the string, in terms of bytes.
 * 
 * This is the number of actual bytes that conform the contents of the string, 
 * which is not necessarily equal to its storage capacity.
 * 
 * Both MyString::size and Mystring::length are synonyms and return the same value.
 */
size_t MyString::size() {
    return 0;
}

/* max_size() - return maximum size of string
 * Returns the maximum length the string can reach.
 * 
 * This is the maximum potential length the string can reach due to known system or library
 * implementation limitations, but the object is not guaranteed to be able to reach that length:
 * it can still fail to allocate storage at any point before that length is reached.
 */
size_t MyString::max_sixe() {
    // https://stackoverflow.com/questions/54536456/why-is-the-value-of-stdstringmax-size-strange
    return ((UINT_MAX) / sizeof(size_t));
}

void MyString::clear() {

}

void MyString::empty() {

}

void MyString::at() {

}

void MyString::append() {

}

void MyString::push_back() {

}

void MyString::pop_back() {

}

void MyString::swap() {

}

void MyString::replace() {

}

void MyString::insert() {

}

void MyString::assign() {

}

void MyString::erase() {

}
