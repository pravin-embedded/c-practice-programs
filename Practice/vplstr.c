#include<stdio.h>
#include<string.h>
void Rev(char *,char *);
int main()
{
    char s[100];
    fgets(s,100,stdin);
    int l=strlen(s);
    if(s[l-1]=='\n')
    s[l-1]='\0';
    
    char substr[100];
    fgets(substr,100,stdin);
    l=strlen(substr);
    if(substr[l-1]=='\n')
    substr[l-1]='\0';
    Rev(s,substr);
    printf("%s",s);
}
void Rev(char *p,char *s)
{
    int i;
    char *start_point=p;
    int len=strlen(s);
    char t,*k;
    while((k=strstr(start_point,s))!=NULL)
    {
        if(k!=NULL)
        {
        for(i=0;i<len/2;i++)
        {
            t=k[len-1-i];
            k[len-1-i]=k[i];
            k[i]=t;
        }
        }
        start_point=k+len;
}
}