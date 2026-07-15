#include<stdio.h>
void move(char*,char*,int);
int main()
{
    char a[20];
    scanf("%s",a);
    printf("%s\n",a);
    move(a+3,a+2,3);
    printf("%s\n",a);
}
void move(char*dst,char*src,int size)
{
    if(dst<src)
    {
        for (int i=0;i<size;i++)
        {
            dst[i]=src[i];
        }
    }
    else
    {
        for(int i=size-1;i>=0;i--)
        {
            dst[i]=src[i];
        }
    }
}