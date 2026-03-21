#include<stdio.h>
int main()
{
	int a = 2;
	//int a = b = 10;
	//printf("%d %d", a, b);
	int b = (a = 10);
	printf("%d %d", a, b);
	return 0;
}

