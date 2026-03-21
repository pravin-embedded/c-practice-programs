#include<stdio.h>
int main()
{
	int a=3;
	int b=2;
	int c=++a * b++ + a-- * --b;
	printf("a=%d c=%d d=%d",a,b,c);
}
