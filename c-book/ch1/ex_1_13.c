// Ex. 1.13 Write a program to print a histogram of the lengths of words
// in its input. It is easy to draw the histogram with the bars horizontal;
// a vertical orientation is more challenging.


#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXWORD 11
#define MAXHIST 15    // Let's assume only 15 words can be inputted



int main(void)
{
    int c;
    int c_count;
    int state;
    int worrd[MAXWORD];
    int i;

    c_count = 0;

    for(i=0; i < 10; i++)
        words[i] = 0;
    
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

    for(i = 0; i < 10; ++i)
        printf("word[%d] = %d\n", i, words[i]);

    return 0;
}

