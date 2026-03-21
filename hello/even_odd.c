#include<stdio.h>
int main()
{
	int num, a;
	printf("Enter the number even or odd: ");
	scanf("%d",&num);
	a = num/10;
	a = a*10;
	num = num -a;
	if( num == 0||num == 2|| num ==4||num==6||num==8)
	//if(num % 2 ==0)
	//if ((num/2)*2 == num)
		printf("The number is even");
	else
	printf("The number is odd");
}
