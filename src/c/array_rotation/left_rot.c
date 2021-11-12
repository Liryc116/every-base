void right_rot(int* a, size_t len, size_t n)
{
    n = n%len;

    for(size_t i = 0; i<n;)
    {
        int tmp = a[0];

        for(size_t k = len-1; k>0; k--)
        {
            int x = a[k];
            a[k]=tmp;
            tmp = x;
        }

        a[0]=tmp;
    }
}
