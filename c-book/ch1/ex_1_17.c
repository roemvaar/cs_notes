// Exercise 1-17 Write a program to print all input lines that are
// longer than 80 characters

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);

int main()
{
    int c;
    int char_count;

    char_count = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n' && char_count > 80)
        {
            printf("%d\n", char_count);
            char_count = 0;
        }

        char_count++;
     }
    
    // Check for new line 

    // If count chars > 80... then print the line
    // else don't do anything, just start reading next line

    return 0;
}


int get_line(char line[], int maxline)
{
    int size;
    
    return size;
}

