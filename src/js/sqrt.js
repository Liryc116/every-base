function sqrt(n)
{
    let root = n;

    while(root*root>n)
		root = (root+n/root)/2;

	return root;
}