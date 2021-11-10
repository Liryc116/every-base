unsigned long fibo(unsigned long n)
{

	unsigned long f0 = 0;
	unsigned long f1 = 1;

	for(unsigned long i = 1; i<n; i++)
	{
		unsigned long tmp = f0;
		f0=f1;
		f1+=tmp;
	}

	return f1;
}
