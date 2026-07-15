#include<stdio.h>
int main()
{
    typedef int Arr[5];
    Arr x={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        printf("%d \n",x[i]);
    }
}