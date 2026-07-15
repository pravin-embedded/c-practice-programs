#include<stdio.h>
void Take(int s[][5],int);
void Print(int s[][5]);
int main()
{
    int s[2][5];
    Take(s,5);
    Print(s);
}
void Take(int s[][5],int size)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("enter the element\n");
			scanf("%d",&s[i][j]);
        }
    }
}
void Print(int s[][5])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
}