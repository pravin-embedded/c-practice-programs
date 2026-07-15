#include<stdio.h>
int main()
{
	int x=5 ,y=10;
	int z=(x++ > y)?x:y;
	printf("%d %d %d", x,y,z);
}
