#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include "is_prime.h"

int main(int argc, char** argv)
{
	unsigned long param = strtoul(argv[1], NULL, 10);

	if (param==0 || argc!=2)
		errx(1, "Error:\nUsage: upper limit");

    for(unsigned long i = 0; i<=param; i++)
    {
        if(is_prime(i))
            printf("%lu is prime\n", i);
    }

	return 0;
}
