#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	(age>=18)?printf("Your eligible to vote\n"):printf("Your not eligible to vote\n");
}
