#include<stdio.h>
int main()
{
    FILE *fp;
    fp = (fopen("data.txt","a"));
    fprintf(fp,"hello in file");
    fclose(fp);

}