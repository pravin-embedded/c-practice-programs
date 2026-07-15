#include<stdio.h>
int Rev(int a)
{
    int n=0;
    while(a)
    {
    n=n*10+(a%10);
    a /= 10;
    }
    return n;
}
int main()
{
    int num,rev;
    printf("Enter the number: ");
    scanf("%d",&num);
    rev = Rev(num);
    printf("Reverse of %d is %d",num,rev);
}