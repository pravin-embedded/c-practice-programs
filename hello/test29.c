#include<stdio.h>
int main()
{
	short int s1 = 1234, s2 = 5678;
	printf("s1:%hd.....s2 = %hd\n", s1, s2);
	printf("Enter intger for s1: ");
	//scanf("%d",&s1);
	scanf("%hd",&s1);
	printf("Enter intger for s2: ");
	//scanf("%d",&s2);
	scanf("%hd",&s2);
	printf("s1:%hd..... s2 =%hd\n", s1,s2);
	return 0;
}
