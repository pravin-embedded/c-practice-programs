#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[5];
    srand(time(NULL));
    for(int i=0;i<5;i++)
    {
        a[i]=rand()%100;
    }
    for(int i=0;i<5;i++)
    {
       printf("%d ",a[i]);
    }
}