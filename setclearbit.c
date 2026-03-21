#include<stdio.h>
int main()
{
	int num,bitpos;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("Enter the position of bit to check: ");
        scanf("%d",&bitpos);
	((num>>bitpos)&1)?printf("The bit is set"):printf("The bit is clear");
}
