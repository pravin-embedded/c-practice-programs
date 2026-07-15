#include<stdio.h>
void leader(int *);
int main()
{
    int a[5]={10,11,8,5,2};
    leader(a);
}
void leader(int *a)
{
    int i;
    for(i=0;i<4;i++)
    {
        if(a[i]>=a[i+1])
        {
            printf("%d ",a[i]);
        }
    }
    printf("%d",a[i]);
}