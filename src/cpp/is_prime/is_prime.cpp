int is_prime(unsigned long n)
{
    if(n<=1)
        return 0;

    for(unsigned long i = 0; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }

    return 0;
}
