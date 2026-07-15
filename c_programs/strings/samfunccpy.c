#include<stdio.h>
void move(char*,char*,int);
int main()
{
    char str[20]="abcdef";
    move(str, str+2, 4);
    printf("%s",str);
}
void move(char*dst,char*src,int size)
{
    for(int i=size-1;i>=0;i--)
    {
        dst[i]=src[i];
    }
}