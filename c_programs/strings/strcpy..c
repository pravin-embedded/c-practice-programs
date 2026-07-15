#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="Pravin";
    int len=strlen(s);
    char s2[7];
    strcpy(s2,s);
    printf("%s\n",s);
    printf("%s",s2);
}