#include<stdio.h>
int main()
{
	char var1 = '5'; //declaration
	char var2 = 'A';// declaration and assignment
	putchar (var1); //std o/p function call similar to printf but for 1 variable at a time
	putchar (var2);
	putchar ('5');
	var1 = var1 - 10;//expression
	var2 = var1 + 45;
	putchar (var1);
	putchar (var2);
}
