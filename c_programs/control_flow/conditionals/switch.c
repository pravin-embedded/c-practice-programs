#include<stdio.h>
int main()
{
	char ch;
	int op1,op2,res;
	printf("Enter + for addition,- for subtraction, / for  division, %% for Mod: ");
	scanf("%c",&ch);
	printf("Enter the operators: \n");
	scanf("%d",&op1);
	scanf("%d",&op2);
	switch(ch)
	{
		case '+': res = op1+op2;
			  printf("%d + %d=%d",op1,op2,res);
		break;
		case '-': res = op1-op2;
			  printf("%d - %d=%d",op1,op2,res);
			  break;
		case '/': res = op1/op2;
			  printf("%d / %d=%d",op1,op2,res);
			  break;
		case '%': res = op1%op2;
			  printf("%d %% %d=%d",op1,op2,res);
			  break;
		default:
			  printf("Invalid operation");
	}
}
