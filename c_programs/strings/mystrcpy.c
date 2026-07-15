#include<stdio.h>
#include<string.h>
void mystrcpy(const char *,char *, int size);
int main()
{
    char s[]="Pravin";
    int len=strlen(s);
    char s2[7];
    mystrcpy(s,s2,7);
    printf("%s\n",s);
    printf("%s",s2);
}
void mystrcpy(const char *s,char*s2, int size)
{
    int i;
    for(i=0;i<size-1;i++)
    {
        s2[i]=s[i];
    }
    s2[i]='\0';
}