#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "Vector Embedded";
    printf("%s\n",s);
    memmove(s+3, s, 5);
    printf("%s",s);
}