#include <stdio.h>
#include<math.h>
int main()
{
    char op;   // variable to store operator

    printf("Enter the action you want to perform (+, -, /, *): ");
    scanf(" %c", &op);   // space before %c to ignore newline

    int a, b;

    printf("Enter the value of a: \n");
    scanf("%d", &a);

    printf("Enter the value of b: \n");
    scanf("%d", &b);

    if (op == '+')
    {
        int sum = a + b;
        printf("The answer for addition is %d", sum);
    }
    else if (op == '-')
    {
        int sub = a - b;
        printf("The answer for subtraction is %d", sub);
    }
    else if (op == '/')
    {
        if (b != 0)
        {
            float division = (float)a / b;
            printf("The answer for division is %.2f", division);
        }
        else
        {
            printf("Division by zero is not allowed.");
        }
    }
    else if (op == '*')
    {
        int multiply = a * b;
        printf("The answer for multiplication is %d", multiply);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}
