//Palindrome
#include<stdio.h>
int main()
{
    int b,n,rev =0,digit;
    printf("Enter the number to reverse: ");
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        digit = n%10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(b==rev)
    {
        printf("Its a palindrome");
    }
    else
    printf("Not a palindrome");
}