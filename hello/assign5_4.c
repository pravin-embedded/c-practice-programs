#include<stdio.h>
int main()
{
	int a =125;
	int b =456;
	a^= b^= a^= b;
	printf("%d, %d",a,b);
	return 0;
}
