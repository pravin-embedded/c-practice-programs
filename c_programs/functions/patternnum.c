/*1 2 3 4 3 2 1
  1 2 3   3 2 1
  1 2       2 1
  1           1*/
#include<stdio.h>
int main()
{
    int i,j,space=-1,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);}
            for(j=1;j<=space;j++)
            {
                    printf("  ");
            }
            for(j=i;j>=1;j--)
            {
                if(i==n&&j==n) continue;
                printf("%d ",j);
            }
        printf("\n");
        if(i==n)
            space=1;
        else space +=2;
    }
}