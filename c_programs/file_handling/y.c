#include<stdio.h>
int main()
{
    FILE *fp;
    fp = (fopen("data.txt","r"));
    if(fp==NULL)
    printf("File not found\n");
    else
    printf("File Found\n");
}