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
    int n,min,max;
    printf("Enter the numbers: ");
    scanf("%d %d",&min,&max);
    if(min==1)
    min+=2;
    else if(min==2)
    {
    printf("2,");
    min=3;}
    else if(min%2==0)
    min++;

    for(;min<=max;min+=2)
    {
        if(min%10==3||min%10==7)
        {
        if(IsPrime(min))
        printf("%d,",min);
    }}
    
}