/*First character == Last character*/
#include<stdio.h>
#include<string.h>
void Same(char *);
int main()
{
    char s[]="apple area level radar cat";
    Same(s);
}
void Same(char *s)
{
    char *p=s;
    char *q=s;

    while(*p!='\0')
    {
        q=p;
        while(*q!=' ' && *q!='\0')
        q++;
        if(*p==*(q-1))
        {
            char *t=p;
            while(t<q)
            {
                printf("%c",*t);
                t++;
            }
            printf(" ");
        }
        if(*q=='\0')
        break;
        p=q+1;
    }
}