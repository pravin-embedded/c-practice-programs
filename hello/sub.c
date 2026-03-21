#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number for subtraction: ");
	scanf("%d", &a);
	printf("Enter the number for subtraction: ");
	scanf("%d", &b);
	int sub = a - b;
	printf("The ans of subtraction is %d",sub);
	return 0;
}
