#include <string>

void to_upper(std::string str)
{
    size_t len = str.length();
    char shift = 'A'-'a'
    for(size_t i = 0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i] += shift;
    }
}
