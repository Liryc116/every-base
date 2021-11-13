#include <stddef.h>

void right_rot(int* a, size_t len, size_t n)
{
    n = n%len;

    for(size_t i = 0; i<n; i++)
    {
        int tmp = a[len-1];

        for(size_t k = 0; k<len-1; k++)
        {
            int x = a[k];
            a[k]=tmp;
            tmp = x;
        }

        a[len-1]=tmp;
    }
}
