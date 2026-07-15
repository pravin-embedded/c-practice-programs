#include<stdio.h>
void Rotate(int *,int size,int);
void Print(int *a,int size);
int main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    int n;
    scanf(" %d",&n);
    Rotate(p,5,n);
    Print(p,5);
}
void Rotate(int *a,int size,int n)
{
    n%=size;
    while(n)
    {
    int t=a[0];
    for(int i=0;i<size;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    a[size-1]=t;
    }
}
void Print(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}