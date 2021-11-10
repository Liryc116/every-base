#include <string>
#include "../atoui/my_atoui.h"

int my_atoi(std::string str)
{
    int res = 0;

    if(str[0]!='-')
        res = my_atoui(str);


    return res;
}
