/*Write a C program to input the gas consumption in cubic meters and calculate the
total cost according to the given conditions:
For the first 50 cubic meters, Rs.0.75 per cubic meter.
For the next 100 cubic meters, Rs.1.00 per cubic meter.
For the next 150 cubic meters, Rs.1.25 per cubic meter.
For cubic meters above 300, Rs.1.50 per cubic meter.
Include a 10% tax on the final cost.*/
#include<stdio.h>
int main()
{
    int gas;
    float use, final_bill,tax;
    printf("Enter the gas consumption: ");
    scanf("%d",&gas);
    if(gas<=50)
    {
        use=gas*0.75;
    }
    else if(gas<=150)
    {
        use=50*0.75+(gas-50)*1.00;
    }
    else if(gas<=300)
    {
        use=50*0.75+100*1.00+(gas-150)*1.25;
    }
    else
    {
        use=50*0.75+100*1.00+150*1.25+(gas-300)*1.50;
    }
    tax=use*0.1;
    final_bill=use+tax;
    printf("The gas consumption is %d\n",gas);
    printf("The gas total used     %f\n",use);
    printf("The included tax is     %.2f\n",tax);
    printf("The final bill is      %f\n",final_bill);
}