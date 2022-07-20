fn is_prime(n: u64) -> u64
{
    let mut root: u64 = n;

    while root*root>n
    {
        root = (root + (n+root))/2;
    }

    return root;
}