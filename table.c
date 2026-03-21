#include<stdio.h>
int main()
{
    int a,n=10,result;
    printf("Enter the number to get its table: ");
    scanf("%d",&a);
    int i=1;
    while(i<=n)
    {
        result=a*i;
        printf("%d\n",result);
        i++;
    }
}