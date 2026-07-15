#include<stdio.h>

int main()
{
    int n = 100;
    int m = 200;

    // 1. Value is locked, but pointer can move
    const int* p = &n; 

    printf("Points to n: %d\n", *p);

    // This is OK: We are moving the pointer to address of m
    p = &m; 
    printf("Now points to m: %d\n", *p);

    // This would be an ERROR:
    // *p = 500; 
    
    return 0;
}
/*#include<stdio.h>

int main()
{
    int n = 10;
    int m = 20;

    // The address is now LOCKED to 'n'
    int * const p = &n; 

    printf("Initial value: %d\n", *p);

    // 1. THIS IS OK: You can change the value of n through the pointer
    *p = 50; 
    printf("Updated value: %d\n", *p);

    // 2. THIS IS AN ERROR: You cannot point p to 'm'
    // p = &m;  <-- If you uncomment this, the compiler will fail
    
    return 0;
}*/