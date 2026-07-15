#include<stdio.h>

enum colors {white, blue, pink, green};

int main()
{
    printf("%d\n", white);
    printf("%d\n", blue);
    printf("%d\n", pink);
    printf("%d\n", green);
    ++pink;
}