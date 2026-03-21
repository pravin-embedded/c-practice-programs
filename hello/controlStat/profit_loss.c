#include<stdio.h>
int main()
{
	int cost, sell;
	float profit,loss;
	printf("Enter the cost: \n");
	printf("Enter the sell: \n");
	scanf("%d",&cost);
	scanf("%d",&sell);
	if((cost-sell)>=0)
	{
		printf("%.2lf is the profit",(float)cost-(float)sell);
	}
	else
	{
		printf("%.2lf is the loss",(float)sell-(float)cost);
	}
}
