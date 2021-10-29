#include <iostream>
#include <string>

#include "strings/myString.h"


int testMyStrings(void)
{
    // Constructor, string assignment
    MyString myStr_1 = "This is MyString - string implementation from scratch";
    MyString myStr_2;
    str2 = "MyString number 2";

    // Iterators

    // Capacity
    cout << myStr_1.length() << endl;

    // Element access

    // Modifiers
    myStr_1.swap(myStr_2);

    cout << myStr_1 << endl;
    cout << myStr_2 << endl;

    // String operations
    myStr_1.find();
    myStr_1.compare();

    // Destructor

    return 0;
}


int testSTDLibStrings(void)
{
    // Constructor, string assignment
    string str1 = "This is STD Library Strings";
    string str2;
    str2 = "String number 2";

    // Iterators

    // Capacity
    cout << scratch.length() << endl;

    // Element access

    // Modifiers
    str1.swap(str2);

    cout << str1 << endl;
    cout << str2 << endl;

    // String operations
    str1.find();
    str1.compare();

    // Destructor

    return 0;
}


int main(void)
{
    testMyStrings();
    testSTDLibStrings();

    return 0;
}
