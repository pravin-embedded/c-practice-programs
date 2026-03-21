//Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    //if((a/2)*2==a)
   // b = a/10;
    //c = a*10;
    //d = a-c;
(a%2==0)?printf("%d is the even number",a):printf("%d is odd number",a);
}
