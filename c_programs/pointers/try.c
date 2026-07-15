#include<stdio.h>
int main()
{
    int x=10;
    int y=20;
    int *p=&x;
    int* q=&y;
    p=&y;
    printf("%d\n%p\n",x,p);
    printf("%d\n%p",y,q);
}