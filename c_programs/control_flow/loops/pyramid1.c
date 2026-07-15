#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop for each ROW
    for (int i = 1; i <= n; i++) {
        
        // Inner loop 1: Print SPACES
        // As i increases, spaces decrease (4, 3, 2, 1, 0)
        for (int j = 1; j <= (n - i); j++) {
            printf(" ");
        }

        // Inner loop 2: Print STARS
        // This math (2*i - 1) creates the odd numbers: 1, 3, 5, 7, 9
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line AFTER printing spaces and stars for this row
        printf("\n");
    }

    return 0;
}