#include<stdio.h>
void swap(int*,int*);
int main()
{
    int x=10;int *p=&x;
    int y=20;int *q=&y;
    swap(p,q);
    printf("%d %d",x,y);
}
void swap(int *p, int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}