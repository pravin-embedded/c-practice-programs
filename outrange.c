#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number outside the range of 10 & 50:");
    scanf("%d", &num);
    if(num <= 10 || num >= 50)
    {
        printf("Outside the range ");
    }
    else
    {
        printf("Inside the range ");
    }
    return 0;
}