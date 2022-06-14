function char_histogram(string)
{
    let histogram = new Array(26);
    for(let i = 0; i<26; i++)
        histogram[i] = 0;

    for(let i = 0; i<string.length; i++)
    {
        let current_char = string.charCodeAt(i);
        
        if(current_char>=97 && current_char<=123)
        {    
            current_char -= 97;
            histogram[current_char] += 1;
        }   
        else if(current_char>=65 && current_char<=91)
        {
            current_char -= 65;
            histogram[current_char] += 1;
        }
    }

    return histogram;
}