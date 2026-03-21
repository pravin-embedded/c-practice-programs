#include<stdio.h>
int main()
{
	short int s1 = 0, s2 = 0;
	printf("s1 = %hd   s2 = %hd\n", s1,s2);
	unsigned short int u1 = 0, u2 = 0;
	printf("u1 = %hd  u2 = %hd\n", u1,u2);
	s2 = s1-1;
	u2 = u1-1;
	printf("s1 = %hd  s2 = %hd\n",s1,s2);
	printf("u1 = %hd  u2 = %hu\n", u1,u2);
}
