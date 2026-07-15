#include <stdio.h>

int main() {
    int n, original, rev = 0, temp;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    original = n;
    temp = n;

    // Logic to reverse only the necessary bits
    while (temp > 0) {
        // Shift rev left to make room for the next bit
        rev <<= 1;
        
        // Add the last bit of temp to rev
        rev |= (temp & 1);
        
        // Move to the next bit in temp
        temp >>= 1;
    }

    printf("Original: %d, Reversed Bits: %d\n", original, rev);

    if (original == rev) {
        printf("YES - It is a palindrome\n");
    } else {
        printf("NO - It is not a palindrome\n");
    }

    return 0;
}