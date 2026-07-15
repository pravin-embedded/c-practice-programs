/*Write a program to print the fiboacci series upto a given count.
e.g if need to print 10 numbers in fibonacci series, then, output should be:
0,1,1,2,3,5,8,13,21,34.*/
#include<stdio.h>
void fiboacci(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fiboacci(n);
}
void fiboacci(int n)
{
    int a=0,b=1,next;
    for(int i=1;i<=n;i++)
    {
        printf("%d",a);
        if(i<n) printf(",");

        next=a+b;
        a=b;
        b=next;
    }
}