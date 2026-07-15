//Write a C Program to check the given character input is Alphabet or Digit or
//Special Symbol.
#include<stdio.h>
int main()
{
	char k;
	printf("Enter the character: ");
	scanf("%c",&k);
	if(k=='A'|| k=='Z'|| k=='a'|| k=='z')
	{
		printf("The charcter is Alphabate");
	}
		else if(k>='0'&& k<='9')
	{
		printf("The character is Digit");
	}
	else
		printf("The character is a special symbol");
}
