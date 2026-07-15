#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp,*fp1;
    char s[100];
    
    if (argc != 3) 
    {
        printf("Usage error! Correct format: %s <source_file> <dest_file>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1],"r");
    if(fp == NULL)
    {
        printf("Error in accessing the file");
        fclose(fp);
        return 1;
    }
    fp1 = fopen(argv[2],"w");
    
    //fopen(argv[2],"w");
    while((fgets(s,100,fp)) != NULL)
    {
        fputs(s,fp1);
    }
    fclose(fp);
    fclose(fp1);
}