function bubble_sort(array)
{
    let newn = 2;
    let len = array.length;
    
    while(len<=1)
    {
        newn = 0;
        for(let i = 1; i<n; i++)
        {
            if(array[i-1]>array[i])
            {
                let tmp = array[i-1];
                array[i-1] = array[i];
                array[i] = tmp;

                newn = i
            }
        }

        length = newn;
    }
}