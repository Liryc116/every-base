#include <stdio.h>
#include "digit_count.h"

int main()
{
	unsigned long pot = 1;
	
	printf("digi_count(%u) = %u\n", 0, digit_count(0));
	
	for(int i = 0; i<64; i++, pot*=2)
		printf("digi_count(%lu) = %u\n", pot, digit_count(pot));
	
	return 0;
}
