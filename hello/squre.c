int square(int n)
{
	return(n*n);
}

#include<stdio.h>
int main()
{
	int n,b;
	scanf("%d",&n);
	b=square(5)+square(5);
	printf("%d\n",n);
	printf("%d\n",b);
}

