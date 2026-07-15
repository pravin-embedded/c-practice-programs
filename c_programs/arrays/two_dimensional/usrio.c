#include<stdio.h>
void Take(int s[][5],int);
int main()
{
    int s[2][5]={10,20,30,40,50,60,70,80,90,100};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    
}
