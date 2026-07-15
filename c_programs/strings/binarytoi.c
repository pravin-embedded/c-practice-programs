#include<stdio.h>
#include<string.h>
int Binary(char *);
int main()
{
    char s[50];
    scanf("%s",s);
    printf("%s is binary\n",s);
    int result=Binary(s);
    printf("%d is interger",result);
}
int Binary(char *s)
{
    char *p=s;
    int l=strlen(s),i=0,decimal=0;
    while(*p=='1' || *p=='0')
    {
        if(*p=='1')
        {
            decimal=(decimal<<1)|1;
        }
        else if(*p=='0')
        {
            decimal=(decimal<<1);
        }
        p++;
    }
    return decimal;
}