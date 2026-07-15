#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	printf("Modified value of x using bitwise is %d",(x & (1<<2)));
	return 0;
}
