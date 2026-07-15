#include <stdio.h>

int main()
{
    int n, i, j, mid, eff;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number\n");
        return 0;
    }

    mid = (n + 1) / 2;

    for (i = 1; i <= n; i++) {
        // 'eff' calculates the "distance" from the center row
        // Top half: i increases, so eff decreases
        // Bottom half: i increases, so eff increases
        eff = (i <= mid) ? (mid - i) : (i - mid);

        for (j = 1; j <= n; j++) {
            // Logic: Print a star if it's on the left block or right block
            // The width of these blocks is determined by 'eff'
            if (j <= eff + 1 || j >= n - eff) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}