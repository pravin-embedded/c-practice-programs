#include<stdio.h>
int main()
{
	int a;
	printf("Enter the num to check positive or negative: ");
	scanf("%d", &a);
	(a>=1)?printf("The entered number is postive\n"):(a<=0)>printf("The entered number is negative");
}
