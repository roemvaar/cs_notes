#include <stdio.h>

unsigned int multiply(unsigned int x, unsigned int y)
{
    if(x == 1)
    {
        /* Terminating case */
        return y;
    }
    else if(x > 1)
    {
        /* Recursive step */
        return y + multiply(x - 1, y);
    }

    /* Catch scenario when x is zero */
    return 0;
}

unsigned int factorial(unsigned int x)
{
    if(x == 1) {
        return x;
    }
    else if(x > 1) {
        return x * factorial(x - 1);
    }

    /* Catch scenerario when x i zero */
    return 1;
}

int main()
{
    printf("3 time 5 = %d\n", multiply(3, 5));

    /* testing factorial code */
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));

    return 0;
}
