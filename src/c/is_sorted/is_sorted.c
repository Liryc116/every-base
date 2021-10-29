#include <stdlib.h>

int is_sorted(int* array, size_t length)
{
    for(int* i = array; i<array+length-1; i++)
    {
        if(*i>*i+1)
            return 0;
    }

    return 1;
}
