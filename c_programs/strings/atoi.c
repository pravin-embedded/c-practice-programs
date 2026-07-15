#include<stdio.h>
#include<string.h>
int Atoichg(char *);
int main()
{
    char s[50];
    fgets(s,50,stdin);
    int n=Atoichg(s);
    printf("%d\n",n);
}
int Atoichg(char *s)
{
    char *p=s;
    int l=strlen(s);
    int t=0;
    while(*p>='0' && *p<='9')
    {
        t=(t*10)+(*p-'0');
        p++;
    }
    return t;
}