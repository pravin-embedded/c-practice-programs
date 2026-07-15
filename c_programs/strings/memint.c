//1 2 3 4 5 6
#include<stdio.h>
#include<string.h>
int main()
{
    int n[6]={1,2,3,4,5,6};
    memmove(n+2,n,4*sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("%d ",n[i]);
    }
}