#include<stdio.h>
int main()
{
    int a = 0, b = 5;

    if(a && b++)
        printf("%d", b);

    printf("%d", b);
}
