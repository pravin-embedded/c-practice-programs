#include<stdio.h>
int main()
{
    FILE *fp;
    char a[10];
    printf("Enter the filename: ");
    scanf("%s",a);
    fp = (fopen(a,"r"));
    if(fp==NULL)
    printf("File not found\n");
    else
    printf("File Found\n");
    fclose(fp);
}