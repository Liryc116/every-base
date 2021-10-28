unsigned long power(unsigned long x, char n)
{
    long result = 1;

    while(n>0)
    {
        if(n%2==0)
        {
            x*=x;
            n/=2;
        }
        else
        {
            result*=x;
            n--;
        }
    }

    return result;
}
