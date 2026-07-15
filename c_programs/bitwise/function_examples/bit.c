#include<stdio.h>
#include<stdlib.h>
void printBinary(int n);
int bitprocess(int n,int bitpos);
int main()
{
    int n,bitpos,choice;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(1)
    {
    printBinary(n);
    printf(" 1.Setbit\n 2.Clearbit\n 3.togglebit\n 4.exit\n Enter:");
    scanf("%d",&choice);
    if(choice==4) break;
    n= bitprocess(n,bitpos);
    }
}
void printBinary(int n)
{
    printf("Binary: ");
    for(int i=31;i>=0;i--)
    {
        if(n&(1<<i))
        printf("1");
        else
        printf("0");
    }
    printf("\n");
}
int bitprocess(int n ,int choice)
{
    int pos;
    switch(choice)
    {
        case 1://set
        printf("Enter the bitposition: ");
        scanf("%d",&pos);
        return n|(1<<pos);
        case 2://clear
        printf("Enter the bitposition: ");
        scanf("%d",&pos);
        return n & ~(1<<pos);
        case 3://toggle
        printf("Enter the bitposition: ");
        scanf("%d",&pos);
        return n^(1<<pos);
        default: exit;
    }
}