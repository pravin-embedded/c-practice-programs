#include<stdio.h>
int main()
{
        long long int n,result=0, p=1,num1,num,skip;
        printf("Enter the number: ");
        scanf("%lld",&n);
        printf("Enter the number to skip: ");
        scanf("%lld", &skip);
        num1=n;
        while(num1>0)
        {
                num = num1 % 10;
                if(num != skip)
                {
                        result= result+(num*p);
                        p=p*10;
                }
                num1/=10;
        }
        printf("%lld", result);
}