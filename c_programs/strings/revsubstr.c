/*Input:
str = "abcdefxyzdef"
sub = "def"
Output:
"abcfedxyzfed"*/
#include<stdio.h>
#include<string.h>
void RepSubstr(char *,char *);
int main()
{
    char s[]="abcdefjhidef";
    char s1[]="def";
    printf("%s\n",s);
    RepSubstr(s,s1);
    printf("%s",s);
}
void RepSubstr(char *s,char *s1)
{
    int len=strlen(s1);
    char *p=s;
    while((p=strstr(s,s1))!=NULL)
    {
        for(int i=0;i<len;i++)
        p[i]=s1[(len-i)-1];
        p+=len;
    }
}