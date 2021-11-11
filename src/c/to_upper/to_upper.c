void to_upper(char* str)
{
    char shift = 'A'-'a'
    for(char* p = str; *p!='\0'; p++)
    {
        if(*p>='a' && *p<='z')
            *p += shift;
    }
}
