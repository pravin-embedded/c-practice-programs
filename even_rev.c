/*Reverse only even digits sum
Input: 123456
extract only even digits → 2,4,6
reverse them logic-wise or just sum → your choice
*/
#include<stdio.h>
int main()
{
    int rev=0,n,even=0,digit,odd=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n%10;
        if(digit%2==0)
        {
            rev =rev*10+digit;
        }
        else
        {
            odd=digit;
            printf("This are odd numbers %d\n",odd);
        }
        n /= 10;
    }
    printf("The even number in reverse order is %d\n",rev);
}