#include<stdio.h>
int main()
{
	int a =7;
	printf("Address of a: %p\n", &a);
	int b = ++a;
	printf("Address of a after increment: %p\n", &a);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}
