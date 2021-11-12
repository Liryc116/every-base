void my_strcat(char* dest, char* src, size_t n)
{
    char* i = dest;

    for(; *i!='\0'; i++);

    char *p;
    for(p = src; p-src<n && *p!='\0'; *i=*p, i++, p++);

    *i='\0';
}
