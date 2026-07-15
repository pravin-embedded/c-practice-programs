#include<stdio.h>

void Isstrong(int n) // Changed to void since we print inside
{
    int temp = n; // Save original value
    int sum = 0;

    while (n > 0) 
    {
        int digit = n % 10;
        int fact = 1;

        // Calculate factorial of the digit
        for (int i = 1; i <= digit; i++) 
        {
            fact *= i;
        }

        sum += fact; // Add the factorial to our running sum
        n /= 10;     // Move to next digit
    }

    if (sum == temp)
        printf("%d is a Strong Number\n", temp);
    else
        printf("%d is NOT a Strong Number\n", temp);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    Isstrong(num);

}