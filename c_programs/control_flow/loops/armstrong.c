//Check Armstrong number
//1^3 + 5^3 + 3^3 = 1+ 125 + 27 = 153
#include<stdio.h>

int main()
{
    int n, num, digit, digits=0, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    
    num = n;
    while(n > 0) {
        digits++;
        n /= 10;
    }
    
    n = num;
    while(n > 0) {
        digit = n % 10;
        int power = 1;
        for(int i = 0; i < digits; i++)
            power *= digit;
        sum += power;
        n /= 10;
    }
    
    if(sum == num)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
}