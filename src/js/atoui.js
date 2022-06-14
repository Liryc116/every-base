function atoui(string)
{
    let result = 0;

    for (let i = 0; i < array.length; i++) {
        let char = array.charCodeAt(i) - 48;
        
        if(char<0 || char>9)
            break;
        result = result * 10 + char;
    }

    return result;
}