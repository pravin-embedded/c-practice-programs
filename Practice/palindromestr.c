#include<stdio.h>
#include<string.h>
void Palindrome(char *);
int main()
{
    char s[100];
    fgets(s,100,stdin);
    int l=strlen(s);
    if(s[l-1]=='\n')
    s[l-1]='\0';
    Palindrome(s);
}
void Palindrome(char *s)
{
    int len=strlen(s),flag=0,i;
    for(i=0;i<len/2;i++)
    {
        if(s[i]==s[len-1])
        {
            flag++;
        }
    }
    if(flag==i)
    {
        printf("palindrome");
    }
    else
    printf("not palindrome");
}