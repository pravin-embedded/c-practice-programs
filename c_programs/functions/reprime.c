#include<stdio.h>
#include<math.h>
int IsPrime(int n)
{
    int s;
    s=sqrt(n);
    for(int i=2;i<=s;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,min=3,cnt=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("2,");
    for(;min<n;min+=2)
    {
        if(IsPrime(min))
        printf("%d,",min);
        cnt++;
    }
    
}