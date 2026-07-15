//Write a C program to find maximum between two numbers.
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter first numbers a: ");
    scanf("%d", &a);
    printf("Enter first numbers b: ");
    scanf("%d", &b);
    printf("The entered number is %d and %d\n",a,b);
    if(a>b)
    printf("The value of a is greater than b ie %d\n", a);
else 
printf("The b is greater than a ie %d", b);
}