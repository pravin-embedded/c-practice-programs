#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int cnt=0;
    fp = (fopen("usropen.c","r"));
    while((ch=fgetc(fp)) != EOF)
    {
        cnt++;
    }
    printf("%d",cnt);
    fclose(fp);
}