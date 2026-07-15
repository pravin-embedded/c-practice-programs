#include<stdio.h>
extern int x;
void f2()
{
    --x;
    printf("f2=%d\n",x);
}