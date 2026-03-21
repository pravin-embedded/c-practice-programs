/*palindrome
Example:
121 → YES  
123 → NO
Use your reverse logic.*/
#include<stdio.h>
int main()
{
    int n,digit,rev=0,b;
    printf("Enter the number to check: ");
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        digit = n%10;
        rev = rev*10+digit;
        n=n/10;
    }
     if(rev==b)
        {
            printf("%d and %d are same its a palindrome",b,rev);
        }
        else
        {
            printf("Not a palindrome");
        }
}