//Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    printf("The number entered is %d\n",a);
    if(a==0)
    printf("Value of a is zero");
else if(a>0)
printf("The number is postive");
else
printf("The number is negative");
}