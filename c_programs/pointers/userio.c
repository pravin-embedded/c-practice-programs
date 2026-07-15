#include<stdio.h>
int main()
{
    int *p;
    int a[5];
    p=a;
    for(int i=0;i<5;i++)
    {
        printf("Enter the value of element %d=",i);
        scanf("%d",a+i);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
}