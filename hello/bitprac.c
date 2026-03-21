#include<stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d", a>>3|b && a<<2|a);
}
