//153
#include<stdio.h>
void Armstrong(int );
int main()
{
    int n=153;
    Armstrong(n);
}
void Armstrong(int n)
{
    int t=n,d,sum=0;
    while(t)
    {
        d=t%10;
        sum=sum+(d*d*d);
        t/=10;
    }
    if(sum==n)
    {
        printf("%d",sum);
        printf("NUmber is armstrong");
    }
    else
    printf("Number is not armstrong");
}