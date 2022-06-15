function is_prime(n)
{
    if((n%2==0 && n!=2) || n==1)
        return false;

    for(let i = 3; i*i <= n; i+=2)
    {
        if(n%i==0)
            return false;
    }

    return true;
}