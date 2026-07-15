#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char(* Readfile(char(*)[100],char *))[100];//char (* readFromFile(char (*lines)[100],char *filename))[100]
void Delete(char (*)[100],int );
void Addtofile(char (*)[100],char* );
int cnt;
int main(int argc,char* argv[])
{
    if(argc!=3)
    {
        printf("Invalid Number Of Inputs");
        printf("exe not found");
        return 1;
    }
    char (*buf)[100]=NULL;
    buf=Readfile(buf,argv[1]);
    Delete(buf,atoi(argv[2]));
    Addtofile(buf,argv[1]);
    free(buf);
}
char(*Readfile(char(*buf)[100],char *filename))[100]
{
    char p[100];
    FILE *fp;
    fp = fopen(filename,"r");
    if(fp==NULL)
    {
        printf("NO file found");
        exit(0);
    }
    while(fgets(p,100,fp)!=NULL)
    {
        buf=realloc(buf,(cnt+1)*sizeof(*buf));
        strcpy(buf[cnt],p);
        cnt++;
    }
    fclose(fp);
    return buf;
}
void Delete(char (*buf)[100],int n)
{
    n=n-1;
    if(n<=0 || n>cnt)
    {
        printf("Invalid option..size is less");
        exit(0);
    }
    else
    {
        memmove(buf+n,buf+n+1,(cnt-1-n)*sizeof(*buf));
        cnt--;
        buf=realloc(buf,cnt*sizeof(buf));
    }
}
void Addtofile(char (*buf)[100],char* filename)
{
    FILE *fp;
    fp = fopen(filename,"w");
    for(int i=0;i<cnt;i++)
    {
        fputs(buf[i],fp);
        //fputc('\n',fp);
    }
    fclose(fp);
}