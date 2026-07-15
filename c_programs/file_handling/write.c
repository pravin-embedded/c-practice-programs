#include<stdio.h>
int main()
{
    FILE *fp;
    fp = (fopen("data.txt","w"));
    if(fp==NULL)
    printf("Failed\n");
    else
    printf("Created/");
}