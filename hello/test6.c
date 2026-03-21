#include<stdio.h>
void f4(void);
void f3(void);
void f2(void);

void f1(void)
{
	printf("Hello from...f1\n");
}
int main()
{
	f1();
	printf("Welcome to main\n");
	f2();
	printf("In between the main\n");
	f3();
	printf("Exiting from the main\n");
	f4();
}
void f2(void)
{
	printf("inside the f2\n");
}
void f3(void)
{
	printf("starting of f3\n");
}
void f4(void)
{
	printf("inside the f4\n");
}

