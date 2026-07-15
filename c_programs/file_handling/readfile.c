#include<stdio.h>
int main(int argc,char *argv[])
{
    int U=0;
    int L=0;
    int D=0;
    int S=0;
    if(argc != 2)
    {
        printf("User input is invalid");
        return 1;
    }
    FILE *fp;
    fp = fopen(argv[1],"r");
    char ch;int cnt=0;
    if(fp==NULL)
    {
        printf("Usage: %s not found..!",argv[1]);
    }
    else
    {
        while((ch = fgetc(fp))!= EOF)
        {
            if(ch>=65 && ch<=90)
            U++;
            if(ch>=97 && ch<=122)
            L++;
            if(ch>=48 && ch<=57)
            D++;
            if(ch==32)
            S++;

            cnt++;
        }
        printf("Total Charcter: %d\n",cnt);
        printf("Uppercase Charcter: %d\n",U);
        printf("Lower Charcter: %d\n",L);
        printf("Digits: %d\n",D);
        printf("Space: %d\n",S);
    }
}