//my_memset(s+2, '*', 3);
#include<stdio.h>
void *Mymemset(void *,char,int );
int main()
{
    char s[]="Pravinsp_hello";
    char c= '*';
    int n=3;
    Mymemset(s+6,c,n);
    printf("%s",s);
}
    void *Mymemset(void *s,char c,int n)
    {
        char *p=s;
        for(int i=0;i<n;i++)
        {
            p[i]=(char)c;
        }
    }
