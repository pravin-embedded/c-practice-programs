#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	(a&1)?printf("%d is an odd number",a):printf("%d is even number",a);
}
