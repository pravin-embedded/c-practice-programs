#include<stdio.h>
#include<string.h>
double Atoichg(char *);
int main()
{
    char s[50];
    fgets(s,50,stdin);
    double n=Atoichg(s);
    printf("%lf",n);
}
double Atoichg(char *s)
{
    char *p=s;
    double t=0;
    while(*p>='0' &&*p<='9')
    {
        t=(t*10)+(*p-'0');
        p++;
    }
    if(*p=='.')
    {
        p++;
    }
    float n=1.0;
    while(*p>='0' && *p<='9')
    {
        t=(t*10)+(*p-'0');
        p++;
        n*=10;
    }
    t/=n;

    return (double)t;
}