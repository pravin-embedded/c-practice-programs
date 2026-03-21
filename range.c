#include<stdio.h>
int main()
{
    int num, a;
    printf("Enter the number between 10 and 50 only: ");
    scanf("%d", &num);
    printf("The number you entered is %d\n", num);
    if(num < 10 || num > 50){
        printf("Entered number is within range\n");
    }
    else{
        printf("Entered number is not in range");
    }
    
    return 0;
}