#include<stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	a = b+2;
	b =a+b;
	a = b-a;
	printf("%d %d",a,b);
}

