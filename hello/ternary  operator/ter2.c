#include<stdio.h>
int main()
{
	int a=10,b=20,c=5;
	int max=(a>b)?a:(b>c?b:c);
	printf("%d",max);
}
