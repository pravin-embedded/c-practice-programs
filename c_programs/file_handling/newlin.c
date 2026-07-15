#include<stdio.h>
int main()
{
    char ch;
    int lines=0;
    FILE *fp;
    fp = (fopen("usropen.c","r"));
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
        lines++;
    }
    printf("%d\n",lines);
    fclose(fp);
}
