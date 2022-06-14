// Rotates to the left
function array_rotation(array, n)
{
    let len = array.length;

    n %= len;

    for(let i = 0; i<n; i++)
    {
        let moved = array[0];

        for(let k = len-1; k>0; k--)
        {
            let tmp = array[k];
            array[k] = moved;
            moved = tmp;
        }

        array[0] = moved;
    }

}