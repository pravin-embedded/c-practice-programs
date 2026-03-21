#include<stdio.h>
int main()
{
	int a =1,num;
	(num=(a>>0)&1)?printf("%d is set",num):printf("%d is clear",num);
}
