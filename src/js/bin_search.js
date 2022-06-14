// returns true if the element is found
function bin_search(array, searched)
{
    let left = 0;
    let right = array.length-1;

    while(left<right)
    {
        let mid = (right-left)/2 + left;
        if(array[mid]==searched)
            return true;
        else if(array[mid]>searched)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return false;
}