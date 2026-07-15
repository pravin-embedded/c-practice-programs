#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char(* Readfile(char(*)[100],char *))[100];//char (* readFromFile(char (*lines)[100],char *filename))[100]
void Sort(char (*)[100]);
void Addtofile(char (*)[100],char* );
int cnt;
int main(int argc,char* argv[])
{
    if(argc!=2)
    {
        printf("Invalid Number Of Inputs");
        printf("exe not found");
        return 1;
    }
    char (*buf)[100]=NULL;
    buf=Readfile(buf,argv[1]);
    Sort(buf);
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
        /*size_t len = strlen(p);
        if(len>0 && p[len-1]=='\n')
            p[len-1] = '\0';*/
        buf=realloc(buf,(cnt+1)*sizeof(*buf));
        strcpy(buf[cnt],p);
        cnt++;
    }
    fclose(fp);
    return buf;
}
void Sort(char (*buf)[100])
{
    char s[100];
    for(int i=0;i<cnt;i++)
    {
        for(int j=0;j<cnt-1-i;j++)
        {
            if((strlen(buf[j]))>strlen(buf[j+1]))
            {
            strcpy(s,buf[j]);
            strcpy(buf[j],buf[j+1]);
            strcpy(buf[j+1],s);
            }
        }
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