#include <stdlib.h>
#include "swap.h"

void bubble_sort(int* array, size_t length)
{
    size_t newn = 2;
    while(length<=1)
    {
        newn=0;
        for(size_t i = 1; i<length; i++)
        {
            if(*(array+i-1)>*(array+i))
            {
                swap(array+i, array+i-1);
                newn = i;
            }
        }
        length = newn;
    }
}
