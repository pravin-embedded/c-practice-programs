/*Delete "abc" from:
"abcxyzabc"*/
#include<stdio.h>
#include<string.h>
void Deletesubstr(char *,char *);
int main()
{
    char s[]="abcaayzaabcaa";
    char s1[]="aa";
    printf("%s\n",s);
    Deletesubstr(s,s1);
    printf("%s",s);
}
void Deletesubstr(char *s,char *s1)
{
    int l=strlen(s1);
    char *p=s;
    while((p=strstr(p,s1))!=NULL)
    {
        memmove(p,p+l,strlen(p+1)+1);
    }

}