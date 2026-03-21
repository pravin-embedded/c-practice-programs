#include<stdio.h>
int main()
{
	int a =3;
	int b =4;
	a^=b^=a^=b^=a;
	printf("%.8b...%.8b\n",a,b);
	printf("%d...%d\n",a,b);
}
