//to check positive or negative using bitwise
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(1&&(num<<31))
	{
		printf("%d is a negative number",num);
	}
	else
	{
		printf("%d is a positive number",num);
	}
}
