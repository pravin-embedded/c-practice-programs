#include<stdio.h>
void move(char*,char*,int);
int main()
{
    char a[20]="abcdefijk";
    char b[20];
    printf("%s\n",a);
    move(b,a+2,20);
    printf("%s\n",b);
}
void move(char*dst,char*src,int size)
{
    for(int i=0;i<size;i++)
    {
        dst[i]=src[i];
    }
}