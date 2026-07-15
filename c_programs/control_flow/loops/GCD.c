#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the 1st number: ");
    scanf("%d", &n);
    printf("Enter the 2nd number: ");
    scanf("%d", &m);

    if (n < 0) n = -n;
    if (m < 0) m = -m;

    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }

    printf("GCD = %d\n", n);
    return 0;
}
