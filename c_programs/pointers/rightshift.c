#include<stdio.h>
void Print(int *,int size);
void Right(int *a,int size);
int main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    Right(p,5);
    Print(p,5);
}
void Right(int *a,int size)
{
    for(int i=size-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=0;
}
void Print(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}