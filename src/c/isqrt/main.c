#include <stdio.h>
#include "isqrt.h"

int main()
{
	for(int i = 0; i<26; i++)
		printf("isqrt(%d) = %ld\n", i*8, isqrt(i*8));

	return 0;
}
