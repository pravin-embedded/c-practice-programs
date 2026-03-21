#include<stdio.h>
#include<stdlib.h>
void f3(void);
void f2(void);
void f1(void);
void f0(void)
{
	printf("In the fo block\n");
	f2();
exit(0);
}
void f1(void)
{
	printf("Inside the f1 block\n");
	f3();
}
void f2(void)
{
	f1();
	printf("In the f2 block\n");
	f3();
}
void f3(void)
{
	printf("In the block f3\n");
	printf("End of the program\n");
}
