unsigned char digit_count(unsigned long n)
{
	unsigned char count=0;

	do
	{
	    count++;
	    n/=10;
	} while(n);

	return count;
}
