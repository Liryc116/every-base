int is_prime(unsigned long n)
{
    if(n%2==0 || n==1)
	    return 0;


    for(unsigned long i = 3; i*i<n; i+=2)
    {
	    // or !n%i
	    if(n%i==0)
		    return 0;
    }

    return 1;
}
