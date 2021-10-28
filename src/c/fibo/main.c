#include <stdio.h>
#include "fibo.h"

int main()
{
	for(int i = 0; i<11; i++)
		printf("fibo(%d) = %ld\n",i,fibo(i));
	
	printf("...\n");
	
	for (int i = 81; i<91; i++)
		printf("fibo(%d) = %ld\n",i,fibo(i));
	
	return 0;
}
