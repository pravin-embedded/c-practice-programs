#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    FILE *fp;
    char *p;
    long int line_start_pos;
    char *line=malloc(200);
   
    int l1=strlen(argv[2]);
    int l2=strlen(argv[3]);
    
    if(argc!=4)
    {
        printf("Error: Not sufficient Inputs\n");
        return 1;
    }
    fp = fopen(argv[1],"r+");
    while(line_start_pos = ftell(fp),(fgets(line,100,fp))!=NULL){
    while((p=strstr(line,argv[2]))!=NULL)
    {
    int l=strlen(line);
    line=realloc(line,(l+1));
    
    
    memmove(p+l2,p+l1,(strlen(p+l1)+1));
    memcpy(p,argv[3],l2);
    p = line + (p-line);
    p=p+l2;
    fseek(fp, line_start_pos, SEEK_SET);
    fputs(line, fp);
    fflush(fp);
    }}
    fclose(fp);
    free(line);
}