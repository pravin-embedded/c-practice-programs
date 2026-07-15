#include<stdio.h>
int main()
{
    int ch;
    printf("Enter the number: ");
    scanf("%d",&ch);
    for(int i=7;i>=0;i--)
    {
        if(ch & (1<<i))
        printf("1");
        else
        printf("0");
    }
    printf("\n");
}