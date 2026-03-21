#include<stdio.h>
int main()
{
	int x,n;
	printf("The first value: ");
	scanf("%d",&x);
	printf("The bit state to check value: ");
        scanf("%d",&n);
	((1>>n)|x)?printf("Its true"):printf("Its false");
}
