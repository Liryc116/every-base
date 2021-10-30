unsigned long facto(unsigned long n)
{
	unsigned long res = 1;

	for(unsigned long i = 2; i <= n; res*=i, i++);

	return res;
}
