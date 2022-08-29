/* function_pointers.c - Example of a pointer to a function
 * feature.
 */

#include <stdio.h>

void display_age(int age)
{
    printf("Hello human! You're %d years young :) \n", age);
    printf("Bye bye, see you mate!\n");
}

int main()
{
    void (*pdisplay_age)(int);
    pdisplay_age = &display_age;
    display_age(5); // "Traditional" way to call a function
    printf("We're about to call display_age() using a pointer!\n");
    (pdisplay_age)(10);

    return 0;
}
