#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,fac;
    printf("Enter the number: ");
    scanf("%d",&n);
    fac=factorial(n);
    printf("%d is factorial of %d\n",fac,n);
}