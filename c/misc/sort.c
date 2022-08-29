/* sort.c - Sorting exercise using qsort()
 */

#include <stdio.h>
#include <stdlib.h>

int compare_descending(const void *left, const void *right)
{
    return (*(int *)right - *(int *)left);
}

int compare_ascending(const void *left, const void *right)
{
    return (*(int *)left - *(int *)right);
}

int main()
{
    int (*cmp_des) (const void *, const void *);
    int (*cmp_asc) (const void *, const void *);
    cmp_des = &compare_descending;
    cmp_asc = &compare_ascending;

    int iarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    qsort(iarray, sizeof(iarray)/sizeof(*iarray), sizeof(*iarray), cmp_des);

    int c = 0;
    while(c < sizeof(iarray)/sizeof(*iarray))
    {
        printf("%d \t", iarray[c]);
        c++;
    }
    printf("\n");

    qsort(iarray, sizeof(iarray)/sizeof(*iarray), sizeof(*iarray), cmp_asc);

    c = 0;
    while(c < sizeof(iarray)/sizeof(*iarray))
    {
        printf("%d \t", iarray[c]);
        c++;
    }
    printf("\n");
}
