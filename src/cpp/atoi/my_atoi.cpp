#include <string>
#include "../atoui/my_atoui.h"

int my_atoi(std::string str)
{
    int res = 0;

    if(str[0]!='-')
        res = my_atoui(str);
    else
    {
        size_t len = str.length();

        for(size_t i = 1; i<len; res=str[i]-'0'+res*10, i++);

        res = -res;
    }

    return res;
}
