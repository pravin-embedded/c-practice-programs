//Longest consecutive 1s
#include<stdio.h>
int main()
{
int cnt=0,ch=14,max=0;
for(int i=7;i>=0;i--)
{
    if(ch&(1<<i))
    {
        printf("1");cnt++;
        if(cnt>max)
        {
            max=cnt;
        }
    }
    else
    { printf("0");cnt=0;}
}
printf("\n");printf("The longest consecutive set bits are %d",max);
}