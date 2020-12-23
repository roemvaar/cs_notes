// Ex. 1.13 Write a program to print a histogram of the lengths of words
// in its input. It is easy to draw the histogram with the bars horizontal;
// a vertical orientation is more challenging.


#include <stdio.h>

#define IN 1
#define OUT 0


int main(void)
{
    int c;
    int c_count;
    int state;

    c_count = 0;
    
    while((c = getchar()) != EOF)
    {
        if((c != ' ') || (c != '\t') || (c != '\n'))
        {
            state = IN;
            c_count++;
        }
        else if(state == IN)
        {
            state = OUT;
            c_count = 0;
        }
    }

    printf("Count = %d\n", c_count);

    return 0;
}

