#include<stdio.h>
int main()
{
    int n=15,count=0,ch;
    for(int i=7;i>=0;i--)
    {
        if(n&(1<<i))
        {
            printf("1");
            count++;
        }
        else
        printf("0");
    }
    printf("\n");
    printf("The set bit in integer is %d\n",count);
}