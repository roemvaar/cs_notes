// Selection sort
//
// Quadratic sorting algorithm
//
// The selection sort algorithm sorts an array by repeatedly finding the 
// minimum element (considering ascending order) from unsorted part and 
// putting it at the beginning.


#include <stdio.h>

#define SIZE(A) (sizeof(A)/sizeof(A[0]))

void selection_sort(int *array, int size);
static void swap_elements(int *xp, int *yp);
void print_array(int * array, int size);


int main(void)
{
    printf("Selection sort algorithm implementation in C\n");
    
    int array[] = {1, 9, 8, 7, 7, 6, 5, 4, 3, 2, 1};

    // Unsorted array
    printf("Unsorted array\n"); 
    print_array(array, SIZE(array));
    
    selection_sort(array, SIZE(array));

    // Sorted array
    printf("Sorted array\n");
    print_array(array, SIZE(array));
    
    return 0;
}


void selection_sort(int *array, int size)
{
    int i;
    int j;
    int smallest;
    
    // Move boundary of unsorted array
    for(i = 0; i < size - 1; i++)
    {
        smallest = i;

        // Find the minimum element in unsorted array
        for(j = i+1; j < size; j++)
        {
            if(array[j] < array[smallest])
            {
                smallest = j;
            }
        }

        swap_elements(&array[smallest], &array[i]);
    }
}


static void swap_elements(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void print_array(int * array, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    putchar('\n');
}
