/*Write a C program to check whether a triangle is valid or not if angles are given using if
else.
• Input all three angles of triangle in some variable say angle1, angle2 and
angle3.
• Find sum of all three angles ,if sum is equals to 180 then it is valid otherwise
not a valid
• In addition, make sure angles are greater than 0*/
#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,b;
	printf("Enter the three angles of triangle: ");
	scanf("%d",&angle1);
	scanf("%d",&angle2);
	scanf("%d",&angle3);
	b =angle1+angle2+angle3;
	if (b==180&&angle1>=0&&angle2>=0&&angle3>=0)
	{
		printf("The triangle is valid");
	}
	else
		printf("Triangle is invalid");
}
