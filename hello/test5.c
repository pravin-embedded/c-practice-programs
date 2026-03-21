#include<stdio.h>
void f2(void);
void f3(void);

void f1(void)
{
	printf("from...f1\n");
	printf("bye from f1\n");
}
int main()
{
	printf("welcome in main\n");
	f3();
	printf("In meddle of main\n");
	f2();
}
void f2(void)
{
	printf("from...f2\n");
}
void f3(void)
{
	printf("from...f3\n");
}

