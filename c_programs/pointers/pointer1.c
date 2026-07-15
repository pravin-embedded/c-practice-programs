#include<stdio.h>
int main()
{
    int x = 20;
    int *p=&x;
    printf("%p\n%d",p,*p);
}