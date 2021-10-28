#include <stdio.h>
#include "is_perfect_number.h"

int main()
{
	// The step could be 2 since there are no known odd perfects
	for(unsigned long i = 1; i<100001; i++)
	{
		if (is_perfect_number(i))
			printf("%lu\n", i);
	}

	return 0;
}
