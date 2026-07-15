#include<stdio.h>
int main()
{
    int bitpos,ch;
    printf("Enter the number: ");
    scanf("%d",&ch);
    
    for(int i=31;i>=0;i--)
    {
        if(ch&(1<<i))
        printf("1");
        else
        printf("0");
    }
    printf("\n");
    printf("Enter the number of clear: ");
    scanf("%d",&bitpos);
    ch=ch&~(1<<bitpos);
    for(int i=31;i>=0;i--)
    {
        if(ch&(1<<i))
        printf("1");
        else
        printf("0");
    }
}