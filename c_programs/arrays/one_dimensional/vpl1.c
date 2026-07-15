#include<stdio.h>
void Zerosort(int a[],int n);
void Print(int a[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    if(n<1 || n>100)
    {
    printf("invalid input");
    return 0;
    }
    int a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Zerosort(a,n);
    Print(a,n);
}
void Zerosort(int a[],int n)
{
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>100)
        {
            printf("Memory Overflow");
            return;
        }
        else if(a[i]!=0)
        {
            a[pos]=a[i];
            pos++;
        }
    }
    while(pos<n)
    {
        a[pos]=0;
        pos++;
    }
}
void Print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}