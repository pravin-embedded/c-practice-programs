#include<stdio.h>
#define ptr int*
int main()
{
    //typedef int* ptr;
   
    ptr p,q;
    int a=10;
    int b=20;
    p=&a;
    q=&b;
    printf("%p\n",p);
    printf("%p\n",q);
}