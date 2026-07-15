#include<stdio.h>
int main()
{
    FILE *fp = fopen("data.txt","r");
    int age;
    char grade;
    char name[20];
    fscanf(fp,"%d %c %s",&age,&grade,name);
    printf("age=%d  grade=%c name=%s",age,grade,name);
}