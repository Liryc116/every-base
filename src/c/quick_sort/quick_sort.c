#include <stdlib.h>
#include "../swap/swap.h"

size_t partition(int* array, size_t length)
{
    int pivot_val = *(array+length-1);

    int* p = array-1;

    for(int* j = array; j<array+length; j++)
    {
        if(*j<=pivot_val)
        {
            p++;
            swap(p, j);
        }
    }

    return (size_t) p;
}

void quick_sort(int* array, size_t length)
{
    if(*array>*(array+length-1))
    {
        size_t p = partition(array, length);
        quick_sort(array, p);
        quick_sort(array+p+1, length-p-1);
    }
}
