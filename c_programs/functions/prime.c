//Prime Check Function
#include<stdio.h>
void Prime(int n)
{
if(n==1)
printf("Not a prime number");
else{
for(int i=2;i*i<=n;i++) {
if(n%i==0)
{
printf("The number is not a prime\n");
return;}
}}
printf("%d is a prime number\n",n);}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    Prime(a);

}