function count_words(string)
{
    let isPrevSeparator = true;
    let count = 0;

    for (let i = 0; i < string.length; i++) 
    {
        let isCurrentSeparator = (string[i]>='a' && string[i]<='z') || 
                        (string[i]>='A' && string[i]<='Z') || 
                        (string[i]>='0' && string[i]<='9');
        

        if(!isPrevSeparator && isCurrentSeparator)
            count += 1;

        isPrevSeparator = isCurrentSeparator;
    }

    return count;
}