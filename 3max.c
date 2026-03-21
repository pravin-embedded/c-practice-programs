#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number: ");
    scanf("%d",&b);
    printf("Enter the number: ");
    scanf("%d",&c);
    (a>b)?(a>c)?printf("%d is greater than %d",a,c):printf("%d is greater than %d",c,a):((b>c)?printf("%d is greater than %d",b,c):printf("%d is greater than %d",c,b));
    return 0;
}