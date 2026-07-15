#include<stdio.h>
int x=10;//this is global declaration 
void fun()
{
    int x=20;//inside function local variable is given priority
    printf("%d\n",x);
}
int main()
{
    printf("%d\n",x);// but outside of that global is given(outside of scope of local x)
    fun();
}