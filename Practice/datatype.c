#include<stdio.h>
#include<string.h>
void Type(char *);
int main()
{
    char s[50];
    fgets(s,50,stdin);
    int l=strlen(s);
    if(s[l-1]=='\n')
    s[l-1]='\0';
    Type(s);
}
void Type(char *s)
{
    int i,flag1=0,flag2=0,flag3=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='.')
        {
            flag1=1;
        }
        else if(s[i]<48 || s[i]>57)
        {
            flag2=1;
        }
    }
    if(flag1==1 && flag2==0)
    printf("Floating number");
    else if(flag2==1)
    printf("invalid input");
    else
    printf("Integer number");
}