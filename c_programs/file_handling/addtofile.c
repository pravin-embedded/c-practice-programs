#include<stdio.h>
int main()
{
    char ch[6] = "vect";
    FILE *fp;
    fp = fopen("data.txt","w");
    fputs(ch,fp);
    fputs("A\n",fp);
    fputs("B\n",fp);
    fputs("C\n",fp);
    fgetc(fp);
    printf("%lld",ftell(fp));
}