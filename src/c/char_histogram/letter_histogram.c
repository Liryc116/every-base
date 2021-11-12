void letter_histogram(char* str, char h[26])
{
    for(size_t i = 0; i<26;h[i]=0, i++);

    for(char* p = str; *p!='\0'; p++)
    {
        if(*p>='a' && *p<='z')
            h[*p-'a']+=1;
        else if(*p>='A' && *p<='Z')
            h[*p-'A']+=1;
    }
}
