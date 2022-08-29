#include <stdio.h>

char *buf;

long factorial(int n)
{
    long result = 1;
    while(n > 0) {
        result = result * n;
        n--;
    }
    return result;
}

int sum_to_n(int num)
{
    int i;
    int sum = 0;

    for(i = 1; i <= num; i++) {
        sum += 1;
    }

    return sum;
}

int main()
{
    // printf("%d! = %ld\n", 10, factorial(10));

    int n = 10;
    sprintf(buf, "sum = %d\n", sum_to_n(n));
    printf("%d\n", sum_to_n(n));

    return 0;
}
