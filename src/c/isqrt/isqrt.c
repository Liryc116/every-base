unsigned long isqrt(unsigned long n)
{
	unsigned long root = n;

	while(root*root>n)
		root = (root+n/root)/2;

	return root;
}
