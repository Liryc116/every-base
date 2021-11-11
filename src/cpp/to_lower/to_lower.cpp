#include <string>

void to_lower(std::string str)
{
    size_t len = str.length();
    char shift = 'a'-'A'
    for(size_t i = 0; i<len; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i] += shift;
    }
}
