#include <stdio.h>

// Function to display number in binary (8-bit)
void printBinary(int n) {
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        if(n&(1<<i))
        printf("1");
        else
        printf("0");
    }
    printf("\n");
}

// Function to perform bitwise actions
int bitProcessor(int n, int choice) {
    int pos;
    switch (choice) {
        case 1: // SET
            printf("Enter bit position (0-7): ");
            scanf("%d", &pos);
            return n | (1 << pos);
            
        case 2: // CLEAR
            printf("Enter bit position (0-7): ");
            scanf("%d", &pos);
            return n & ~(1 << pos);
            
        case 3: // TOGGLE
            printf("Enter bit position (0-7): ");
            scanf("%d", &pos);
            return n ^ (1 << pos);
            
        default:
            return n;
    }
}

int main() {
    int n, choice;

    printf("Enter a number (0-255): ");
    scanf("%d", &n);

    while (1) {
        printf("\n--- Current Number: %d ---\n", n);
        printBinary(n);
        printf("1. Set Bit\n2. Clear Bit\n3. Toggle Bit\n4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        n = bitProcessor(n, choice);
    }

    return 0;
}