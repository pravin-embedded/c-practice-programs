#include<stdio.h>
int main()
{
	int a = 3;
	char c = 'c';
	char ch  = 'A';
	float f  = 3.65f;
	double d  = 65.32;
	printf("a = %lu\n", sizeof(a));
	printf("'c' = %lu\n", sizeof('c'));
	printf("c = %lu\n", sizeof(c));
	printf("%lu\n", sizeof(3.65f));
	printf("%lu\n", sizeof("3.65"));
	printf("%lu\n", sizeof(65.32));
	return 0;
}
