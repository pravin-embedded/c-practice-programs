#include<stdio.h>
void f2(void);
void f3(void);

void f1(void)
{
	printf("from...f1\n");
f2();
f3();
}
int main()
{
	printf("welocome to main\n");
	f3();
	f1();
	printf("Exit from main\n");
}
void f2(void)
{
	printf("welocome to f2\n");
	printf("in side the f2\n");
}
void f3(void)
{
	printf("Its f3 starting\n");
	printf("Exit from f3\n");
}
