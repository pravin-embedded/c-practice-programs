#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	switch(num)
	{
		case 1: printf("Inside the 1");
			break;
		case 2: printf("Inside the 2");
		case 3: printf("Inside the 3");
			break;
		case 4: printf("Inside the 4");
		default:
			printf("Inside default");
		case 5: printf("Inside the 5");
	}
}
