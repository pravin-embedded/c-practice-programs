#include<stdio.h>
int main()
{
int a=10,b=20;
printf("a=%d b=%d\n",a,b);
b=a*b/a=b; //it will throw a error as it will get solved as a*b(200) then a*b/a(20) then a*b/a=b(20 = b) **this 20 = b) 
//b=a*b/(a=b);
//b=(a*b)/(a=b);
//b=((a*b)/(a=b));
printf("a=%d b=%d\n",a,b);
}
