#include <stdio.h>

// Exercise 1-6. Verify that the expression
// getchar() != EOF is 0 or 1

// Exercise 1-7. Write a program to print the value of EOF


int main(void)
{
    char value;
    
    printf("EOF = %d\n", EOF);  // Ex. 1-7

    for(;;)
    {   
        value = getchar();

        if(value == EOF)
        {
            printf("Input value is equal to EOF, i.e. %d\n", EOF);
            break;
        }
        else
        {
            putchar(value);
        }
    }

    return 0;
}

