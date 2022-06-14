function power(x, n)
{
    let result = 1;

    while(n > 0)
    {
        if(n % 2 == 1)
        {
            n--;
            result *= x;
        }
        else
        {
            n /= 2;
            x *= x;
        }
    }

    return result;
}