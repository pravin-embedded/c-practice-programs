#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	(a&1)?printf("%d is odd",a):printf("%d is even",a);
}
