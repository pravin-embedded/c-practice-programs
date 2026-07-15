#include<stdio.h>
int main()
{
    typedef int Matrix[2][3];
    
    Matrix m={{10,20,30},{100,200,300}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}