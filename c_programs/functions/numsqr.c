#include <stdio.h>

static inline int square(int a)
{
    return a * a;
}

int main(void)
{
    int n;

    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("%d\n", square(n));
    return 0;
}