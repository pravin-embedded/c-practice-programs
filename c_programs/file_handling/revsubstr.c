#include<stdio.h>
#include<string.h>
void Reverse(char *substr,int size)
{
    int n=size/2;
    for(int i=0;i<n;i++)
    {
        int t=substr[i];
        substr[i]=substr[size-1-i];
        substr[size-1-i]=t;
    }
    return;
}
int main(int argc, char* argv[])
{
    FILE *fp;
    char *p;
    long int line_start_pos;
    char line[100];
    if(argc!=3)
    {
        printf("Error: Not sufficient Inputs\n");
        return 1;
    }
    fp = fopen(argv[1],"r+");
    while(line_start_pos = ftell(fp),(fgets(line,100,fp))!=NULL){
    while((p=strstr(line,argv[2]))!=NULL)
    {
    int l=strlen(argv[2]);
    Reverse(p,l);
    //strncpy(p,rev,l);
    fseek(fp,line_start_pos,SEEK_SET);
    fputs(line,fp);
    p=p+l;
    fflush(fp);
    }}
    fclose(fp);
}