#include <stdio.h>

int isPalindrome(int *p, int size) {
    int *start = p;              
    int *end = p + (size - 1);   

    while (start < end) {
        if (*start != *end) {
            return 0; 
        }
        start++;
        end--;   
    }
    return 1;
}

int main() {
    int a[] = {1, 2, 3, 2, 1};
    int b[] = {1, 2, 3, 4};
    int size_a = 5;
    int size_b = 4;

    if (isPalindrome(a, size_a)) 
        printf("Array A: YES\n");
    else 
        printf("Array A: NO\n");

    if (isPalindrome(b, size_b)) 
        printf("Array B: YES\n");
    else 
        printf("Array B: NO\n");

    return 0;
}