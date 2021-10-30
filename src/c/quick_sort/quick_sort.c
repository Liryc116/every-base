#include <stdlib.h>
#include "swap.h"

size_t partition(int* array, size_t length)
{
    int pivot_val = *(array+length-1);

    size_t p = array-1;

    for(int* j = array; j<array+length; j++)
    {
        if(*j<=pivot_val)
        {
            p++;
            swap(array+i, array+j);
        }
    }

    return p;
}

void quick_sort(int* array, size_t length)
{
    if(*array>*(array+length-1))
    {
        size_t p = partition();
        quicksort(array, p);
        quicksort(array+p+1, length-p-1);
    }
}
