//Sum of digits
#include<stdio.h>
int main()
{
    int n,digit,i=0,rev=0;
    printf("Enter the number to add: ");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n%10;
        rev = rev + digit;
        n = n / 10;
    }
    printf("%d",rev);
}