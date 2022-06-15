function sieve_of_eratosthenes(n)
{
    n+=1; // So the highest index is n
    let result = new Array(n);
    for (let i = 0; i < n; i++) 
        result[i] = true;
    result[0] = result[1] = false;

    for(let i = 2; i*i<n; i++)
    {
        if(result[i])
        {
            for(let j = i*i; j<n; j+=i)
                result[j] = false;
        }
    }

    return result;
}