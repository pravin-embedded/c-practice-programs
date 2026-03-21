/*Write a C program to input the usage in gallons and calculate the total water bill
according to the given conditions:
For the first 50 gallons, Rs1.00 per gallon.
For the next 100 gallons, Rs.1.50 per gallon.
For the next 100 gallons, Rs.2.00 per gallon.
For gallons above 250, Rs.2.50 per gallon.
Add an additional 15% surcharge to the final bill*/
#include<stdio.h>
int main()
{
    int gallon,amount;
    float total_usg,final_bill,surcharge;
    printf("Enter the usage of water in gallon: ");
    scanf("%d", &gallon);
    if(gallon <= 50)
    {
        total_usg = gallon * 1.0;
    }
    else if(gallon <= 150)
    {
        total_usg = 50 * 1.0 + (gallon - 50) * 1.5;
    }
    else if(gallon <= 250)
    {
        total_usg = 50 * 1.0 + 100 * 1.5 + (gallon - 150) * 2.0;
    }
    else
    {
        total_usg = 50 * 1.0 + 100 * 1.5 + 100 * 2.0 + (gallon - 250) * 2.5;
    }
    surcharge = total_usg * 0.15;
    final_bill = total_usg + surcharge;
    printf("Gallon of water consumed: %d\n", gallon);
    printf("Total usage (before surcharge): %.2f\n", total_usg);
    printf("Surcharge (15%%): %.2f\n", surcharge);
    printf("Final bill for water is: %.2f\n", final_bill);
}