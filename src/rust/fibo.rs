fn fibo(n: u64) -> u64
{
    let mut f0: u64 = 0;
    let mut f1: u64 = 1;

    if n<=1
    {
        return n;
    }

    for _ in (1..n)
    {
        let old_f0 = f0;
        f0 = f1;
        f1 += old_f0;
    }

    return f1;
}