#include<stdio.h>
int main()
{
	printf("%lu\n",sizeof('\n'));
	printf("%lu\n",sizeof("5"));
	printf("%lu\n",sizeof(5.0));
	printf("%lu\n",sizeof(23.4f));
	printf("%lu\n",sizeof("23.4f"));
}
