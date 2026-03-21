/*Check number is strong number
Example:
145 → 1! + 4! + 5! = 145 → YES
Needs:
digit extraction
factorial inside loop*/
#include<stdio.h>
int main()
{
    int n,b,fact,digit,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        digit = n%10;
        fact=1;
        while(digit>0)
        {
            fact= fact*digit;
            digit--;
        }
        sum = sum+fact;
        n /= 10;
    }
    printf("The factorial and there addition for %d is %d",b,sum);
}