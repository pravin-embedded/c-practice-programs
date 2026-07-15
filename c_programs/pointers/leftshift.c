#include<stdio.h>
void Print(int *,int size);
void left(int *a,int size);
int main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    left(p,5);
    Print(p,5);
}
void left(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        a[i]=a[i+1];
    }
    a[size-1]=0;
}
void Print(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}