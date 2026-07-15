//Count total set bits
#include<stdio.h>
int main()
{
    int  ch,cnt=0;
    printf("Enter the value of ch: ");
    scanf("%d",&ch);
    for(int i=7;i>=0;i--)
    {
       if(ch&(1<<i))
       {
       printf("1");
       cnt++;
       }
       else
       printf("0");
    }
    printf("\n");
    printf("The set bits are %d in total.",cnt);
}