#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    //char ch;
    fp = fopen(argv[1],"r");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File opened successfully");
        fclose(fp);
    }
   
}