#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp,*fp1;
    int ch;
    
    if (argc != 3) 
    {
        printf("Usage error! Correct format: %s <source_file> <dest_file>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1],"r");
    fp1 = fopen(argv[2],"w");
    
    //fopen(argv[2],"w");
    while((ch = fgetc(fp)) !=EOF)
    {
        fputc(ch,fp1);
    }
    fclose(fp);
}