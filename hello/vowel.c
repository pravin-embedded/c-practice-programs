#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabate: ");
	scanf("%c", &ch);
	if(ch >= 65 && ch<= 90)
		printf("Its an alphabate");
			if(ch=='A' || ch =='E' || ch =='I' || ch == 'O' || ch == 'U')
				printf("Its an vowel");
			else
				printf("Its not a vowel");
	}
