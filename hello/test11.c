#include<stdio.h>
int main()
{
	int row = 5;
	int i;
	for(int i = row; i>=1; i--)
	{
        printf("*");
	for(int j = 1; j<=i; j++)
	{
		printf("*");
	}
	printf("\n");
	}
	return 0;
}

