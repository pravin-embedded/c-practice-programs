/*Write a C program to input the number of minutes used and calculate the total cost 
of a mobile plan according to the given conditions:
For the first 100 minutes, Rs.0.50 per minute.
For the next 150 minutes, Rs.0.40 per minute.
For minutes above 250, Rs.0.30 per minute.
Add an additional flat fee of Rs.5.00 to the final cost*/
#include<stdio.h>
int main()
{
    int minutes;
    float amount,final_cost;
    printf("Enter the number of minutes used: ");
    scanf("%d", &minutes);

    if (minutes <= 100)
    {
        amount=minutes*0.50;
    }
    else if(minutes<=250)
    {
        amount=100*0.50+(minutes-100)*0.40;
    }
    else
    {
        amount=100*0.50+150*0.40+(minutes-250)*0.30;
    }

    final_cost = amount + 5.0f;

    printf("The minutes consumed are %d\n", minutes);
    printf("The pre-fee amount is %.2f\n", amount);
    printf("The final cost (including Rs.5 fee) is %.2f\n", final_cost);

    return 0;
}