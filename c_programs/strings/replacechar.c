#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="Vector india of embedded";
    char ch='i';
    printf("\n%s",s);
    char *l=strchr(s,ch);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)
        {
            s[i]='*';
        }
    }
    printf("\n%s",s);
}