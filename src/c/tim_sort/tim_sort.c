#include "tim_sort.h"

#define RUN 32

void insert_sort(int *array, size_t len)
{
    for(size_t i = 0; i<len; i++)
    {
        int tmp = array[i];
        size_t k = i;
        for(; k>0 && array[k-1]>tmp; k--)
            array[k]=array[k-1];
        array[k]=tmp;
    }
}

void merge(int *array, size_t r, size_t len)
{
    int arr[len];
    for(size_t i = 0; i<len; arr[i]=array[i], i++);

    size_t i = 0;
    size_t j = r;
    for(size_t k = 0; k<len; k++)
    {
        if(i<r && (j>=len || arr[i]<arr[j]))
        {
            array[k]=arr[i];
            i++;
        }
        else
        {
            array[k]=arr[j];
            j++;
        }
    }
}

size_t min(size_t x, size_t y)
{
    if(x<y)
        return x;
    return y;
}

void tim_sort(int *array, size_t len)
{
    for(size_t i = 0; i<len; i+=RUN)
        insert_sort(&array[i], min(RUN, len));

    for(size_t i = RUN; i<len; i*=2)
    {
        for (size_t left = 0; left < len; left += 2*i)
        {
            size_t mid = left + i - 1;
            size_t right = min((left + 2*i - 1), (len-1));

            if(mid < right)
                merge(&array[left], mid, right);
        }
    }
}
