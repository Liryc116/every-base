function digit_count(n)
{
    let result = 0;
    
    do {
        result += 1;
        n /= 10;    
    } while (n!=0);

    return result;
}