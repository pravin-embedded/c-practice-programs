#include<stdio.h>
int main()
{
    int n=15,bitpos;
    printf("Enter bitposition to check in 15: ");
    scanf("%d",&bitpos);
    for(int i=7;i>=0;i--)
    {
        if(n &(1<<i))
        printf("1");
        else
        printf("0");
    }
    printf("\n");
    //n=n&~(1<<bitpos);
    //for(int i=7;i>=0;i--)
    {
        if(n&(n>>bitpos))
        printf("1");
        else
        printf("0");
    printf("\n");
    }
    printf("resulting decimal: %d\n",n);
}