#include<stdio.h>
void Add(int*,int*);
int main()
{
    int a;
    int x=10;
    int y=20;
    int *p=&x;
    int *q=&y;
    Add(p,q);
    printf("%d %d",x,y);
}
void Add(int *a,int *b)
{
    *a=*a+*b;
    *b=*a;
}
