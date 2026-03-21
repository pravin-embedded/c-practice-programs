#include<stdio.h>
int main()
{
	int a=5;
	int b=(a++,a++ + ++a,a);
	printf("%d %d\n",a,b);
}
