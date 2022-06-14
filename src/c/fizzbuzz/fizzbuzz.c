#include <stdio.h>


// The optimisation depends on the cost of the print
void fizzbuzz(unsigned long n)
{
    for(unsigned long i = 1; i<=n; i++)
    {
        int isDiv3;
	    if(isDiv3=(i%3==0))
		    printf("Fizz");
        if(i%5==0)
		    printf("Buzz");
        else if(!isDiv3)
            printf("%ld",i);

        printf("\n");
    }

}
