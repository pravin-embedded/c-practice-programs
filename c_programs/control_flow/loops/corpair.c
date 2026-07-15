#include<stdio.h>

int main() {
    int ch = 14; // Binary: 00001110
    int pair_count = 0;
    int i = 7;

    while (i > 0) { // Stop at 0 because we check (i) and (i-1)
        if ((ch & (1 << i)) && (ch & (1 << (i - 1)))) {
            pair_count++;
            i = i - 2; // Found a pair! JUMP over both bits
        } else {
            i--; // No pair, just move to the next single bit
        }
    }

    printf("Non-overlapping pairs: %d\n", pair_count);
    return 0;
}