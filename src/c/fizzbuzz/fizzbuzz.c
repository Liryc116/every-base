#include <stdio.h>

void fizzbuzz(unsigned long n)
{
    for(unsigned long i = 1; i<=n; i++)
    {
        int ndiv3;
	    if((ndiv3=i%3)==0)
		    printf("Fizz");
        if(i%5==0)
		    printf("Buzz");
        else if(ndiv3)
            printf("%ld",i);

        printf("\n");
    }

}
