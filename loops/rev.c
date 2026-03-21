/*Reverse a number
Example:
123 → 321
Hint
Inside loop:
rev = rev * 10 + digit*/
#include<stdio.h>
int main()
{
    int n,rev=0,digit;
    printf("Enter a num to reverse it: ");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    printf("%d",rev);
}