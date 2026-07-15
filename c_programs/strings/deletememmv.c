//"banana" delete all 'a';
#include<stdio.h>
#include<string.h>
void Deletechar(char *,char);
int main()
{
    char s[]="banana";
    char ch='a';
    printf("%s\n",s);
    Deletechar(s,ch);
    printf("%s",s);
}
void Deletechar(char *s,char ch)
{
    char *p=s;
    while((p=strchr(p,ch))!=NULL)
    {
        memmove(p,p+1,strlen(p));
    }
}