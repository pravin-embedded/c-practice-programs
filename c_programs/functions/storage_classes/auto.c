#include<stdio.h>
void Auto();
int main()
{
    printf("inside of main\n");
    Auto();Auto();Auto();
}
void Auto()
{
    auto int x=1;//stored in stack
    x++;
    printf("%d\n",x);
    //every time it get stared as refreshed as its a auto storage class it is destroyed after execution as stored in stack
}