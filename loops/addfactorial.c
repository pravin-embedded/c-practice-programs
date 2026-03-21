#include<stdio.h>
int main()
{
    int a=0,n=1,i;
    printf("Enter the last limit for factorial: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        a = a + i;
        i++;
    }
    printf("%d", a);
}