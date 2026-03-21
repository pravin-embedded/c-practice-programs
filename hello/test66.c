#include<stdio.h>
int main()
{
	int a = 64;
	float f = 3.14f;
	char ch = 'A';
	double d = 23.25;
	printf("The value of a = %lu\n", sizeof(64));
	printf("size of float = %lu\n", sizeof("3.14"));
	printf("size of char = %lu\n", sizeof("A"));
	printf("size of double = %lu\n", sizeof(23.25));
	return 0;
}
