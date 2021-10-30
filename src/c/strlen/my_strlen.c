int my_strlen(char* str)
{
    int length = 0;

    for(char* i = str; *i!='\0'; i++, length++);

    return length;
}
