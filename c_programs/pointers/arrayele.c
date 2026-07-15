#include<stdio.h>
void Print(int *,int size);
int main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    Print(p,5);
}
void Print(int *a,int size)
{
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}