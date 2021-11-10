unsigned long power(unsigned long x, char n)
{
    double res = 1;

    while(n>0)
    {
        if(n%2==0)
        {
            x*=x;
            n/=2;
        }
        else
        {
            res*=x;
            n--;
        }
    }

    return res;
}
