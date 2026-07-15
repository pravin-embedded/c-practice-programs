#include<stdio.h>
#include<string.h>
void Palindrome(char *);
int main()
{
    char s[]="madam level cat radar apple";
    Palindrome(s);
}
void Palindrome(char *s)
{
    char *p=s;
    char *q=s;
    
    while(*p!='\0')
    {
        int cnt=0,i;
        q=p;
        while(*q!=' ' && *q!='\0')
        q++;
        int t=(q - p)/2;
        for(i=0;i<t;i++)
        {
            if(*(q-1-i) == *(p+i))
            cnt++;
            //printf("%d",t);
        }
        if(cnt==t)
        {
        char *b=p;
        while(b<q)
        {
            printf("%c",*b);
            b++;
        }
        printf(" ");
    }
    if(*q=='\0')
    break;
    p=q+1;
    }
}