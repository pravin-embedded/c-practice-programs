/*Count digits of a number
Example:
1234 → 4 digits*/
#include<stdio.h>
int main()
{
    int n=0,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=1;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
}