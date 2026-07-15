#include<stdio.h>
float add(float a,float b)
{
    float c;
    c=a+b;
    return c;
}
int main()
{
    float n1,n2,sum;
    printf("Enter the numbers: ");
    scanf("%f %f",&n1,&n2);
    sum=add(n1,n2);
    printf("%.2f is addition of %.2f, %.2f",sum,n1,n2);
}