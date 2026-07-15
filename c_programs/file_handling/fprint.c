#include<stdio.h>
int main()
{
    FILE *fp;
    int age =25;
    char ch='g';
    fp = fopen("data.txt","w");
    fprintf(fp,"%d %c\n",age,ch);
    fclose(fp);
}