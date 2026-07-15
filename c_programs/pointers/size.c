#include <stdio.h>

int main(void) {
    printf("sizeof(void*) = %zu\n", sizeof(void*));
    printf("sizeof(int*)  = %zu\n", sizeof(int*));
    printf("sizeof(char*) = %zu\n", sizeof(char*));
    return 0;
}