#include<stdio.h>
#include<sys/resource.h>
int main()
{
    FILE *fp=NULL;
    struct rlimit limit;
    limit.rlim_cur = 100;
    limit.rlim_max = 100;

    if(setrlimit(RLIMIT_FSIZE,&limit)==-1)
    {
        perror("setlimit");
        return 1;
    }

    fp = fopen("abc","w");
    if(fp == NULL)
    {
        perror("open");
        return 1;
    }
    int r;
    for(int i=1;i<99;i++)
    {
        r=fprintf(fp,"A");
        if(r<0)
        {
            perror("fprint");
            break;
        }
    }
    fclose(fp);
}