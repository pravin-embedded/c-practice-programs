//converting the given number into its opposite letter
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the input: ");
	scanf("%c", &ch);
	(ch>='A' && ch<= 'Z')?printf("%c",ch + 32):(ch>='a' && ch<='z')?printf("%c",ch-32):printf("Its not a alpha");
}

