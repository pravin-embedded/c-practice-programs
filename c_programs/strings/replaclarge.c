#include<stdio.h>
#include<string.h>
void Replace(char *,char *,char *);
int main()
{
    char s[100]="This is my book";
    char s1[]="my";
    char s2[]="our";
    printf("%s\n",s);
    Replace(s,s1,s2);
    printf("%s",s);
}
void Replace(char *p,char *q,char *r)
{
    int l1=strlen(q);
    int l2=strlen(r);
  p=strstr(p,q);
    {
        memmove(p+l2,p+(l1),l2+l1);
        strncpy(p,r,l2);
        p=p+l2;
    }
}
