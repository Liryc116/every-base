#include <stddef.h>

void merge_sorted(int* a1, size_t len1, int* a2, size_t len2, int* a)
{
    size_t i, k, l;
    i = k = l = 0;

    while(i<len1 || k<len2)
    {
        if(i<len1)
        {
            if((k<len2 && a1[i]<=a2[k]) || k>=len2)
            {
                a[l]=a1[i];
                l++;
                i++;
            }
        }
        if(k<len2)
        {
            if((i<len1 && a2[k]<=a1[i]) || i>=len1)
            {
                a[l]=a2[k];
                l++;
                k++;
            }
        }
    }
}
