#include<stdio.h>
int x=10;
static int y=2;
void f1();
int main()
{
    f1();
 return 0;
}
void f1()
{
    printf("%d %d",x,y);
}