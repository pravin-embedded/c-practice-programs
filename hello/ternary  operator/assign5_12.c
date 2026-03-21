#include<stdio.h>
int main()
{
	int a = 0,b= 5;
	printf("%d\n", a++ && b++);
	printf("%d %d\n", a, b);
}

