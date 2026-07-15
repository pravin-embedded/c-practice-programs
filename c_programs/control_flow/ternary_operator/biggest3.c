#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number to check biggest: \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && b>c)
		printf("%d is the biggest number\n",a);
	else if(b>a && b>c)
		printf("%d is the biggest number\n",b);
	else
		printf("%d is the biggest number\n",c);
}
