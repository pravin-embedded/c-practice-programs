#include<stdio.h>
int main(int argc,char* argv[])
{
    char s[100];
    if(argc!=2)
    {
        printf("Error...!");
        return 1;
    }
    FILE *fp;
    fp = fopen(argv[1],"r");

    if(fp==NULL)
    {
        printf("File not found");
        return 1;
    }
    else
    {
        while((fgets(s,100,fp))!=NULL)
        {
            int i = 0;
        
        // Skip leading spaces, tabs, or newlines to find the true first character
        while(s[i] == ' ' || s[i] == '\t')
        {
            i++;
        }
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]= s[i]-32;
            }
            printf("%s",s);
        }
    }
    fclose(fp);

}