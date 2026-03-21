#include<stdio.h>
int main()
{
	printf("%zu\n",sizeof('A'));
	printf("%zu\n",sizeof(32.5));
	printf("%zu\n",sizeof("abc"));
	return 0;
}
