#include<stdio.h>
int main()
{
	int a=10, b=20, c=5, d=4, e=2, r;
	r=a+b/c*(b=5)%d-e;
	printf("%d",r);
	}
