#include<stdio.h>
int main()
{
	int num;
	printf("Enter the year: ");
	scanf("%d", &num);
	if(num%4)
	{
		printf("The year %d is not leap\n",num);//it dont work like else it will print after else block executed
	}
	printf("The year %d is leap",num);
}
