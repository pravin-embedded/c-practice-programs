#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[100];
    fp = fopen("open.c","r");
    while((fgets(ch,100,fp)) != NULL)
    {
        printf("%s",ch);
    }
    fclose(fp);
}