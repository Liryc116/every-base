#include <stdlib.h>
// To use calloc
#include <stddef.h>
// To use size_t

int* sieve(int size)
{
    int* array = calloc((size_t) size, sizeof(int));

    int i;
    for(i = 2; i*i<size; i++)
    {
        if(array[i-2]==0)
        {
            array[i-2]=1;

            int lim = size/i;

            for(int k = i; k<lim; k++)
                array[k*i-2]=-1;
        }
    }

    for(; i<size; array[i-2]=1, i++);

    return array;
}
