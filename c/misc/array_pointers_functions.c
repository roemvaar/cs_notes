/* array_pointers_functions.c - array of pointers to functions and call each function
 * using its pointer from the array.
 */

#include <stdio.h>

void f1(int var)
{
    printf("this is f1 and var is: %d\n", var);
}

void f2(int var)
{
    printf("this is f2 and var is: %d\n", var);
}

void f3(int var)
{
    printf("this is f3 and var is: %d\n", var);
}

int main()
{
    /* define an array full of function pointers 
       to the above functions, that take an `int` as
       their only argument */
    void (*array_func_point[])(int) = {f1, f2, f3};
    int c = 0;

    while(c < 3)
    {
        /* call the functions using the function pointers
        of the array at index `c` with `c` as an argument */
        array_func_point[c](c);
        ++c;
    }

    return 0;
}
