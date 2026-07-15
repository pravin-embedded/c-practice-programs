//Write a C program to find maximum between two numbers.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Enter number c: ");
    scanf("%d", &c);

    /* determine the largest of the three */
    if (a >= b && a >= c) {
        printf("%d is the largest\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the largest\n", b);
    } else {
        printf("%d is the largest\n", c);
    }
}