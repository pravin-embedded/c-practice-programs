#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	(num>>(sizeof(int)*8-1)&1)?printf("%d is negative",num):printf("%d is positive",num);
}
