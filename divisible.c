//Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0) {
        printf("the number is divisible by both 5 and 11\n");
    } else if (num % 5 == 0) {
        printf("the number is divisible by 5\n");
    } else if (num % 11 == 0) {
        printf("the number is divisible by 11\n");
    } else {
        printf("the number is not divisible by 5 or 11\n");
    }
}