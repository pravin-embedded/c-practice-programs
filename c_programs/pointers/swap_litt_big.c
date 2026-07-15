#include <stdio.h>
void fun(char *,char *);
int main()
{
    int x=0x1234;
    char *p=(char *)&x;
    fun(p,(p+1));
    printf("%x %x",*p,*(p+1));
}
void fun(char *p,char *p2)
{
    int t=*p;
    *p=*p2;
    *p2=t;
}