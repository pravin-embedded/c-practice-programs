#include<stdio.h>
int main()
{
    int a,i=0,n,number,sum=1,digit,count=1,add=0;
    printf("Enter the number to check if is it armstrong or not: ");
    scanf("%d",&number);
    n=number;
    a=n;
    while(number>0)
    {
        number /=10;
        i++;
    }
    printf("i = %d\n",i);
    while(n>0)
    {
        digit = n%10;
        count = 1;
        sum=1;
        while(i>=count)
        {
            sum = sum*digit;
            count++;
        }
        n /= 10;
        add = add+sum;
    }
    if(a==add)
    printf("The %d is armstrong number",a);
    else
    printf("The number is not armstrong number");
}