/*Count even and odd digits
Input: 12345
Output:
even = 2  
odd = 3*/
#include<stdio.h>
int main()
{
    int n,even=0,odd=0,digit;
    printf("Enter the number to extract: ");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n%10;
        if(digit%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        n = n/10;
    }
    printf("Even = %d\nOdd = %d",even,odd);
}