#include<stdio.h>
#include<string.h>
int Palinrome(char *);
int main()
{
    char s[100];
    fgets(s,100,stdin);
    int l=strlen(s);
    if(s[l-1]=='\n')
    s[l-1]='\0';
    int n=Palinrome(s);
    if(n==0)
    {
        printf("no palindromes in the given string");
    }
    else if(n==65)
    printf("empty string");
    else
    printf("%d",n);
}
int Palinrome(char *s)
{
    char *p,*q;
    p=s;
    q=p;
    int cnt=0;
    while(*p!='\0' && *q!='\0')
    {
        while(*p==' ')
        p++;
    q=p;
    while(*q!=' ' && *q != '\0')
    q++;
    
    char *start=p;
    char *end=q-1;
    int palindrome=1;
    while(start<end)
    {
     if(*start!=*end)
     {
        palindrome=0;
        break;
     }
     start++;
     end--;
    }
    if(palindrome==1)
    cnt++;
    p=q;
    }
    if(*(p-1)==' '||*(q-1)==' ')
    return 65;
    else
    return cnt;
}