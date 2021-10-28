#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include "fizzbuzz.h"

int main(int argc, char** argv)
{
	unsigned long param = strtoul(argv[1], NULL, 10);

	if (param==0 || argc!=2)
		errx(1, "Error, usage: upper limit");

	printf("divisor_sum(%lu) =\n", param);
    fizzbuzz(param);

	return 0;
}
