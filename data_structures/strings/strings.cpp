#include <iostream>
#include "strings.h"

using namespace std;

/* Strings - scratch implementation using C++
 * Implementing a string class is a popular and useful exercise.
 *
 * Operations:
 * 
 * Input:
 *    - getline() - used to store a stream of characters as entered by the user
 *    - push_back() - used to input a character at the end of the string
 *    - pop_back() - used to delete the last character from the string
 *
 * Capacity:
 *    - capacity() - returns the capacity allocated to the string, which can be
 *      equal to or more than the size of the string.
 *    - resize() - changes the size of the string, the size can be increased or decreased
 *    - length() - return the length of the string
 * 
 * Iterator:
 *    - begin() - returns an iterator to beginning of the string
 *    - end() - returns an iterator to end of the string
 *
 * Manipulating:
 *    - swap() :- swaps one string with other.
 *    - copy(“char array”, len, pos) - copies the substring in target character
 *      array mentioned in its arguments.
 */

/* MyString
 *
 * MyString class stores the characters as a sequence of bytes with a
 * functionality of allowing access to single byte character.
 */
class MyString()
{
    // TODO: Make sure to allocate memory dynamically, i.e., more memory can
    // allocated at run time on demand.
public:
    MyString(){};
    MyString(char[]){};
    ~MyString();

private:
    int len;
};

// Driver code - only used for testing, should be deleted later
// and incorporated to the main testing suite
int main(void)
{
    MyString str1 = "Roberto Valenzuela";
    MyString str2;

    // Initialize str2

    cout << MyString.length() << endl;

    str1.swap(str2);

    return 0;
}
