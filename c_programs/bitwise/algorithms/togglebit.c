#include<stdio.h>
int main()
{
    int bitpos,ch;
    printf("Enter the number: ");
    scanf("%d",&ch);
    printf("Enter the number of bit which to toggle: ");
    scanf("%d",&bitpos);
    for(int i=31;i>=0;i--)
    {
        if(ch&(1<<i))
        printf("1");
        else
        printf("0");
    }
    printf("\n");
    ch=ch^(1<<bitpos);
    for(int i=31;i>=0;i--)
    {
        if(ch&(1<<i))
        printf("1");
        else
        printf("0");
    }
}