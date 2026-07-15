/* * * * *
   * * *
   * *
   *
   * *
   * * *
   * * * * */
#include<stdio.h>
void flag(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    flag(n);
}
void flag(int a)
{
    for(int i=a;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=2;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}