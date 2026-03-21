#include<stdio.h>
int main()
{
	int i =20;
	int r = ++i + i++;
	printf("%d %d", i, r);
}
