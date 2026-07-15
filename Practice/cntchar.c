//Open file and count characters.
#include<stdio.h>
int main()
{
    int cnt=0;
    char ch;
    FILE *fp;
    
    fp=fopen("data.c","r");
    fseek(fp,0,SEEK_END);
    cnt=ftell(fp);
    /*while((ch=fgetc(fp))!=EOF)
    {
        cnt++;
    }*/
    printf("%d\n",cnt);
}