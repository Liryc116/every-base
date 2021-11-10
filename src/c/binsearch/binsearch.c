#include <stdlib.h>

int binsearch(int* array, size_t length, int x)
{
    size_t l = 0;
    size_t r = length-1;

    while(l<=r)
    {
        size_t mid = (l+r)/2;
        if(*(array+mid)==x)
            return 1;
        else if(*(array+mid)<x)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return 0;
}
