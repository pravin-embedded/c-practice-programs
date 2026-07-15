#include<stdio.h>
int main()
{
	int x=5, y=20, z;
	z=x++ || ++y;
	printf("%d",z,y,z);
}
