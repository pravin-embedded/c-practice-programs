#include<stdio.h>
int main()
{
    int n = 10,i,j,k=1,o;
    for(i=1;i<=5;i++)
    {
         for(o=5;o>i;o--)
            {
                printf(" ");
            }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}