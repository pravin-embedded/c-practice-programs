/*Input: number
Output: sum of digits
Example:
123 → 1 + 2 + 3 = 6*/
#include<stdio.h>
int main()
{
    int n,a,count=0,sum=0;
    printf("Enter the number to add: ");
    scanf("%d",&n);
    int i=1;
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%d",sum);
}