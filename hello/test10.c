#include<stdio.h>
void your_name(char str[])
{
	printf("Enter your name: ");
	fgets(str, 100, stdin);
}
int main()
{
	char name[100];
printf("Hello may we know you little sir..!\n");
	your_name(name);
	printf("Your name u have given is %s",name);
	return 0;
}
