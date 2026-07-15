/*memset(p, '*', length);*/
#include<stdio.h>
#include<string.h>
void RepSubstr(char *,char *);
int main()
{
    char s[]="abadeabaijk";
    char s1[]="aba";
    printf("%s\n",s);
    RepSubstr(s,s1);
    printf("%s",s);
}
void RepSubstr(char *s,char* s1)
{
    int l=strlen(s1);
    char *p=s;
    while((p=strstr(p,s1))!=NULL)
    {
       memset(p, '*', l);
       p+=l;
    }
}