//Reverse a string manually
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="Pravin";
    printf("Original: %s\n", s);
    int t,len=strlen(s)-1,start=0;
    while(start<len)
    {
        t=s[start];
        s[start]=s[len];
        s[len]=t;
        len--;
        start++;
    }
    printf("Reversed: %s\n", s);
    return 0;
}
