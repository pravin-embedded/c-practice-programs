#include<stdio.h>
int main()
{
    char ch[10]="vector";
    int cnt=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        cnt++;
    }
    printf("%d",cnt);
}