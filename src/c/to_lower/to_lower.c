void to_lower(char* str)
{
    char shift = 'a'-'A'
    for(char* p = str; *p!='\0'; p++)
    {
        if(*p>='A' && *p<='Z')
            *p += shift;
    }
}
