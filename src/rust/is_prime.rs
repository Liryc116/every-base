fn is_prime(n: u64) -> bool
{
    if(n<=1 || (n!=2 && n%2==0))
    {
        return false;
    }
    
    for i in (3..n).filter(|x| x%2==1 && x*x <= n)
    {
        if n%i==0
        {
            return false;
        }
    }
    
    return true;
}