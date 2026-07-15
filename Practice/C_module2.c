#include<stdio.h>
#include<string.h>
void Mask(char *p,char *q)
{
    char *s;
    int l= strlen(q),i=0;
    while((s=strstr(p,q)))
    {
    for(i=0;i<l;i++)
    {
        s[i]='*';
    }
    p = s+l;
}
}
int main(int argc,char* argv[])
{
    int cnt=0;
    if(argc!=3)
    {
        printf("Invalid Inputs");
        return 1;
    }
    FILE *fp;
    fp=fopen(argv[1],"r");
    if(fp==NULL)
    {
        printf("File not found");
        return 1;
    }
    char t[100][100];
    while((fgets(t[cnt],100,fp))!=NULL)
    {
        cnt++;
    }
    fclose(fp);
    for(int i=0;i<cnt;i++)
    {
        if(strstr(t[i],argv[2]))
        {
            Mask(t[i],argv[2]);
        }
    }
    fp=fopen(argv[1],"w");
    for(int i=0;i<cnt;i++)
    {
        fputs(t[i],fp);
    }
    fclose(fp);
}