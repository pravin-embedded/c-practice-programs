#include<stdio.h>
int main()
{
	int x=-1, y=20,z;
	z=++x && (y=30);
	printf("%d",x,y,z);
}
