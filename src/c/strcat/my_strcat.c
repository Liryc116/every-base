void my_strcat(char* dest, char* src)
{
    char* i = dest;

    for(; *i!='\0'; i++);

    for(char *p = src; *p!='\0'; *i=*p, i++, p++);

    *i='\0';
}
