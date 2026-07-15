#include<stdio.h>
#include<string.h>
void rev(char* s)
{
        char temp;
        int l=strlen(s);
        if (l > 0 && s[l - 1] == '\n') {
        l--; 
    }
        int size=l/2;
        for(int i=0;i<size;i++)
        {
                temp=s[l-1-i];
                s[(l-1-i)]=s[i];
                s[i]=temp;
        }
}
int main(int argc,char* argv[])
{
        FILE *fp;
        char t[100][100];
        int cnt=0;
        fp=fopen(argv[1],"r+");
        while(cnt<100 && (fgets(t[cnt],100,fp))!=NULL)
        {
            cnt++;
        }
        fclose(fp);
        for(int i=0;i<cnt;i++)
        {
        if(strstr(t[i],argv[2])!=NULL)
                {
                        rev(t[i]);
                }
        }
        
        fp=fopen(argv[1],"w");
        for(int j=0;j<cnt;j++)
        {
                fputs(t[j],fp);
        }
        fclose(fp);
}