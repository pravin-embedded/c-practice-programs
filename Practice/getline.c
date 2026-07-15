//Open file and count lines
#include<stdio.h>
int main()
{
    int cnt=0;
    char ch[100];
    FILE *fp;
    
    fp=fopen("data.c","r");
    while((fgets(ch,100,fp))!=NULL)
    {
        cnt++;
    }
    printf("%d\n",cnt);
}