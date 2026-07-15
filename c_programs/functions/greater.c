#include<stdio.h>
int Greater(int a, int b)
{
    if(a>b)
    return 1;
    else
    return 0;
}
int main()
{
int n,n1,greater;
printf("Enter the numbers: ");
scanf("%d %d",&n,&n1);
greater=Greater(n,n1);
if(greater==1)
printf("%d is greater\n",n);
else
printf("%d is greater\n",n1);
}
