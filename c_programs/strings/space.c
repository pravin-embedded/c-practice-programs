//Take input with spaces and print it
#include<stdio.h>
int main()
{
    char s[30];
    scanf(" %[^\n]",s);
    //fgets(s,30,stdin);
    printf("%s",s);
}