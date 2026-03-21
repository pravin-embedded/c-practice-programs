#include<stdio.h>
int main()
{
//check if its upper or lower in alphabat
	char ch;
	printf("Enter the alphabate: ");
	scanf("%c", &ch);
	(ch >= 'A' && ch <= 'Z')?printf("The number is an Alphabate\n"):((ch>='a' && ch<='z')?printf("The number is an alpha"):printf("The number is not alpha"));
}
