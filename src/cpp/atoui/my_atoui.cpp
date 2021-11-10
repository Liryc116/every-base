#include <string>

unsigned my_atoui(std::string str)
{
    size_t len = str.length();
    unsigned res = 0;

    for(size_t i = 0; i<len; i++)
    {
        if (str[i]>='0' && str[i]<='9')
            res = str[i]-'0' + 10*res;

    }
    return res;
}
