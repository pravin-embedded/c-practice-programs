#include<stdio.h>
int main()
{
        int rev1=0,rev=0,n,num,digit,num1,skip;
        printf("Enter the number: ");
        scanf("%d",&n);
        printf("Enter the number to skip: ");
        scanf("%d", &skip);
        num1=n;
        while(num1>0)
        {
                num = num1 % 10;
                if(!(num == skip))
                {
                        rev = rev*10+num;
                }
                num1/=10;
        }
        while(rev>0)
        {
                rev1= rev1*10+(rev%10);
                rev/=10;
        }
        printf("The number is %d",rev1);
}