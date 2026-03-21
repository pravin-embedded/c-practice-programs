#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	if(ch >= 'A' && ch<= 'Z')
		printf("The entered %c value is a alphabate ie capital", ch);
	else if(ch>= 'a' && ch<= 'z')
		printf("The entered %c value is a alphabate ie small", ch);
	else
		printf("The entered %c is not an alphabate", ch);
}

