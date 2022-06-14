function atoi(string)
{
    let result = 0;
    let sign = 1;
    let i = 0;

    if(array.charCodeAt(0)==45)
    {
        i = 1;
        sign = -1;
    }

    for (; i < array.length; i++) {
        let char = array.charCodeAt(i) - 48;
        
        if(char<0 || char>9)
            break;
        result = result * 10 + char;
    }

    return result*sign;
}