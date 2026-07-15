#include<stdio.h>
int fib(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d,",fib(i));
    }
}
    int fib(int a)
    {
        if(a<=1)
        return a;
        else
        return fib(a-1)+fib(a-2);
    }