#include <stddef.h>

size_t count_words(char* str)
{
    size_t res = 0;
    int separator = 1;

    for(char *p = str; *p!='\0'; p++)
    {
        if((*p>='a' && *p<='z') || ( *p>'A' && *p<='Z') || (*p>='0' && *p<='9'))
        {
            if (separator)
                res++;
            separator = 0;
        }
        else
            separator = 1;
    }

    return res;
}
