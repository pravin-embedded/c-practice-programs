#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of x:" );
	scanf("%d", &x);
	printf("Enter the value of y:" );
        scanf("%d", &y);
	(y%x==0)?printf("x is factor of y"):printf("x is not factor of y");
}
