#include<stdio.h>
int main()
{
	int choice;
	printf("Enter the number: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Inside the case 1");
			break;
		case 2: printf("Inside the case 2\n");
		case 3: printf("Inside the case 3\n");
			break;
		case 4: printf("Inside the case 4");
	}
}
