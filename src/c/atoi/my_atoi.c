#include "../atoui/my_atoui.h"

int my_atoi(char* str)
{
    int res = 0;

    if(*str=='-')
        res = -my_atoui(str+1);
    else
        res = my_atoui(str);

    return res;
}
