#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* Replace(char *line,char *substr,char *newstr)
{
    char *p;
    p=line;
        while((p=strstr(p,substr))!=NULL)
        {
            int l=strlen(line);
            int l1=strlen(substr);
            int l2=strlen(newstr);
            int p_offset=p-line;
            line=realloc(line,(l+(l2-l1)+1));
            p=line+p_offset;
            memmove(p+l2,p+l1,strlen(p+l1)+1);
            memcpy(p,newstr,l2);
            //realloc(line,(line(l2-l1)));
            p=p+l2;
        }
        return line;
}


char* Readfile(char *filename)
{
    FILE *fp;
    char *p=NULL;
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("No file found");
        exit(0);
    }
    fseek(fp,0,SEEK_END);
    int size=ftell(fp);
    p=malloc(size+1);
    rewind(fp);
    fread(p,size,1,fp);
    p[size]='\0';
    fclose(fp);
    return p;

}
void Addtofile(char *p, char* filename)
{
    FILE* fp;
    fp=fopen(filename, "w");
    fwrite(p,strlen(p),1,fp);
    fclose(fp);
}
int main(int argc,char *argv[])
{
    
    if(argc!=4)
    {
        printf("error");
        return 1;
    }
    char *buf=NULL;
    buf = Readfile(argv[1]);
    buf = Replace(buf,argv[2],argv[3]);
    Addtofile(buf,argv[1]);
    free(buf);
}