#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the values for comparision:");
    scanf("%d", &num1);
    printf("Enter the values for comparision:");
    scanf("%d", &num2);
    (num1>num2)?printf("%d is greater than %d", num1,num2):printf("%d is greater than %d",num2,num1);
    return 0;
}