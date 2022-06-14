function partition(array, startIndex, endIndex, splitPoint)
{
    let pivot = values[endIndex];

    let i = startIndex-1;

    for (let j = startIndex; j < endIndex; j++) 
    {
        if(array[j] <= pivot)
        {
            i = i+1;

            let tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
        
    }

    let tmp = array[i];
    array[i] = array[endIndex];
    array[endIndex] = tmp;

    return i+1;
}


function quick_sort(array, startIndex, endIndex)
{
    if(startIndex < endIndex)
    {
        let pivot = partition(array);

        quick_sort(array, first, pivot-1);
        quick_sort(array, pivot+1, endIndex);
    }
}