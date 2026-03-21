#include<stdio.h>
int main()
{
    int rev=0,rev1=0,n,digit=0, digit1=0,skip,num;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the number to skip: ");
    scanf("%d",&skip);
    num = n;
    while(num>0)
    {
        digit =num % 10;
        num /=10;
        if(digit != skip)
        {
            rev =rev*10+digit;
        }
    }
    while(rev>0)
    {
        rev1 =rev1*10+(rev%10);
        rev /= 10;
    }
    printf("%d\n",rev1);
}