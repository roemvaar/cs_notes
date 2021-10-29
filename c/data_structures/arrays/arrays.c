// Arrays in C

#include <stdio.h>

#define ARRAY_SIZE 10


int main(void)
{
    int array[ARRAY_SIZE];
    int i;
 
    // Fill array elements
    for(i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = i;
    }
 
    // Print array elements
    for(i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}

