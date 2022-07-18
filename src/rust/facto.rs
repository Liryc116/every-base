fn facto(n: u64) -> u64
{
    let mut result: u64 = 1;

    for i in (2..=n)
    {
        result = result * i;
    }

    return result;
}