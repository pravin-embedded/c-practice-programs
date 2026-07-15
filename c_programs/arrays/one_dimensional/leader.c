#include<stdio.h>
void Leader(int a[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Leader(a,n);
}
void Leader(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i+1]>a[i])
        printf("%d ",a[i+1]);
    }
    printf("%d",a[n-1]);
}