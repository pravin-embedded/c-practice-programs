#include<stdio.h>
int main()
{
    int a = 5, b = 3;

    a ^= b;
    printf("a = %b\n",a);
    b ^= a;
    printf("b = %b\n",b);
    a ^= b;
    printf("a = %b\n",a);

    printf("%d %d", a, b);
}
