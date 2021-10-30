unsigned long divisor_sum(unsigned long n)
{
    if(n<=1)
	    return 0;

    unsigned long sum = 1;
    unsigned long i=2;
    int step=1;

    // Optimize odd numbers
    if (n%2)
    {
	i=3;
	step++;
    }

    for(; i*i<n; i+=step)
    {
	// or !n%i
	if(n%i==0)
		sum+=i+(n/i);
    }

    if(i*i==n)
	sum+=i;

    return sum;
}
