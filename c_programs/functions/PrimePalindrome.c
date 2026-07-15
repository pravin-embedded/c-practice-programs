#include<stdio.h>
#include<math.h>
int isPrime(int);
int isPalindrome(int);
int main()
{
    int min,max;
    printf("Enter the number: ");
    scanf("%d %d",&min,&max);
    for(;max>=min;max--)
    {
        if(isPrime(max)&& isPalindrome(max))
        printf("%d,",max);
    }
}
int isPrime(int n)
{
    int s;
    s=sqrt(n);
    for(int i=3;i<=s;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int isPalindrome(int n)
{
    int t=n;
    int a=0;
    while(t)
    {
    a=a*10+t%10;
    t /= 10;}
    return (a==n);
}
