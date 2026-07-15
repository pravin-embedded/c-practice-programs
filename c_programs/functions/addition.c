#include<stdio.h>
int Add(int a,int b)
{
    int c;
    c= a + b;
    return c;
}
int main()
{
    int n,n1,sum;
    printf("Enter the numbers: ");
    scanf("%d %d",&n,&n1);
    sum=Add(n,n1);
    printf("%d is addition\n",sum);
}