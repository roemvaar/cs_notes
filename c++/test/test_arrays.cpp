#include <iostream>
#include "arrays.h"

using namespace std;

int main()
{
    MyArray int_array(5);

    int_array.get_at(5);
    int_array.len();
    int_array.traverse();
    int_array.set_at(5 , 2);

    return 0;
}
