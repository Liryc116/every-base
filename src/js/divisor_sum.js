function divisor_sum(n)
{
    if(n<=1)
        return 0;


    let i = 2;
    let step = 1;
    let result = 1;

    if(n%2!=0)
    {
        step = 2;
        i = 3
    }

    for(; i*i<n; i+=step)
    {
        if(n%i==0)
            result += i + n/i;
    }

    if(i*i==n)
        result+=i;

    return result;
}