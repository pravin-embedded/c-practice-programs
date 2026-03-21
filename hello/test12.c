#include<stdio.h>
#include<stdlib.h>

int printf(const char *format,...);

void f2(void);
void f1(void);
void f0(void)
{
	printf("Inside the f0\n");
	f1();
	printf("Middle of the main\n");
	f2();
	exit(0);
}
void f1(void)
{
	printf("f1 is opened\n");
}
void f2(void)
{
	printf("from f2...\n");
}
