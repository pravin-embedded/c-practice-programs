#include<stdio.h>
#include<string.h>
char *my_strchr(char *s, int c,int len)
{
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]==(char)c){
        return &s[i];}
    }
}
int main()
{
    char s[]="Vector";
    int l=strlen(s);
    char search='o';
    printf("%s",s);
    char *c=my_strchr(s,search,l);
    printf("%c got on address at %ld",search,c-s);
}
