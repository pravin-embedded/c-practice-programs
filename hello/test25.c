#include<stdio.h>
int main()
{
	short int var = 32767;
	printf("var = %hd\n", var);
	++var;
	printf("var = %hd\n", var);
	return 0;
}
