function merge_sorted(array1, array2)
{
    let len1 = array1.length;
    let len2 = array2.length;
    let result = new Array(len1 + len2);

    let i, k, l;
    i = k = l = 0;

    while(i<len1 || k < len2)
    {
        if(i<len1)
        {
            if(k>=len2 ||  array1[i]<=array2[k])
            {
                result[l] = array1[i];
                i++;
                l++;
            }
        }
        if(k<len2)
        {
            if(i>=len1 ||  array2[k]<=array1[i])
            {
                result[l] = array2[k];
                k++;
                l++;
            }
        }
    }

    return result;
}