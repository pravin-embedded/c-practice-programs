#include<stdio.h>
void f2(void);
void f1(void);

void f1(void)
{
printf("hello...from f1\n");
f2();
printf("bye from f1\n");
}
int main()
{
	printf("hello...from main\n");
	f1();
	printf("In..main\n");
	f2();
	printf("Bye from main\n");
}
void f2(void)
{
	printf("Hello...from f2\n");
}
