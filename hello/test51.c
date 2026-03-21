#include<stdio.h>
int main()
{
	float var = 35;
	printf("var = %f..... %e\n", var,var);
	var = var/10;
	printf("var =%f.....%e\n",var,var);
	var = var/1000;
	printf("var =%f.....%e\n",var,var);
	var = 0.00034547;
	printf("var =%f....%e\n",var,var);
	var = 456.789;
	printf("var =%f.....%e\n",var,var);
	return 0;
}
