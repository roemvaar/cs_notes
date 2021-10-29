#ifndef MY_STRING_H
#define MY_STRING_H

/* MyString
 *
 * MyString class stores the characters as a sequence of bytes with a
 * functionality of allowing access to single byte character.
 *
 * Implementing a string class is a popular and useful exercise.
 * https://www.cplusplus.com/reference/string/string/
 *
 * Member functions:
 * 
 *    - (constructor) - construct string object
 *    - (destructor) - string destructor
 *    - operator= - string assignment
 *
 *    Iterators:
 *    - begin - return iterator to beginning
 *    - end - return iterator to end
 *
 *    Capacity:
 *    - length - return length of string
 *    - size - return length of string
 *    - max_sixe - return maximum size of string
 *    - clear - clear string
 *    - empty - test if string is empty
 *
 *    Element access:
 *    - operator[] - get character of string
 *    - at - get character in string
 *
 *    Modifiers:
 *    - append - append to string
 *    - push_back - append character to string
 *    - pop_back - delete last character
 *    - swap - swaps string value
 *    - replace - replace portion of string
 *    - insert - insert into string
 *    - assign - assign content to string
 *    - erase - erase characters from string
 * 
 *    String operations:
 *    - find - find content in string
 *    - compare - compare strings
 */

class MyString()
{
    // TODO: Make sure to allocate memory dynamically, i.e., more memory can
    // allocated at run time on demand.
    public:
        MyString(){}; // constructor
        ~MyString();    // destructor
        // operator=
        begin();
        end();
        size_t length()
        size_t size();
        size_t max_sixe();
        clear();
        empty();
        // operator[]
        char& at(size_t pos);
        append();
        push_back();
        pop_back();
        swap();
        replace();
        insert();
        assign();
        erase();
};

#endif /* MY_STRING_H */
