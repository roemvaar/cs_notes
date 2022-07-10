// Bitwise operations in C

#include <stdio.h>
#include "bit_manipulation.h"


int main(void)
{
    int a;
    int b;
  
    a = 12;   // b'0000 1100
    b = 25;   // b'0001 1001
  
    printf("A & B = %x", a & b);  // b'0000 1000 - 0x8
  
    return 0;
}
