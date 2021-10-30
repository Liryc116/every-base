unsigned int my_atoui(char* str)
{
    unsigned int res = 0;

    for(char* p = str; *p!='\0' && *p>='0' && *p<='9'; p++)
        res=(*p-'0')+res*10;

    return res;
}
