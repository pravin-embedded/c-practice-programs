//Open file and count words.
#include<stdio.h>
int main(int argc,char* argv[])
{
    int ch,word=0;
    int cnt=0;
    if(argc!=2)
    {
        printf("Invalid input");
        return 0;
    }
    FILE *fp;
    fp=fopen(argv[1],"r");
    if(fp==NULL)
    {
        printf("NO file found");
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r')
        {
            word=0;
        }
        else{
            if(word==0)
            {
                cnt++;
                word=1;
            }
        }
    }
    printf("%d\n",cnt);

}