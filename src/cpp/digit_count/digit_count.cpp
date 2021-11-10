unsigned char digit_count(unsigned long n)
{
    if(n==0)
        return 1;

    unsigned char res;

    for(res =0; n!=0; res++, n/=10);

    return res;
}
