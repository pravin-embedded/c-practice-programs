#include<stdio.h>
#include<string.h>
double Atoichg(char *);
int main()
{
    char s[]="1234";
    printf("%s\n",s);
    int n=Atoichg(s);
    printf("%d",n);
}
double Atoichg(char *s)
{
    char *p=s;
    int l=strlen(s);
    int t=0;
    while(*p!='\0')
    {
        for(int i=0;i<l;i++)
        {
            t=(t*10)+(*p-48);
            p++;
        }
    }
    return t;
}