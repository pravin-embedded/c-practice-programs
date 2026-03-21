#include<stdio.h>
int main()
{
	int x = 12;
	printf("%d\n", x > 2 && x < 15);
	printf("%d\n", x > 2 || x <15);
	printf("%d\n", !(x < 20));
	return 0;
}
