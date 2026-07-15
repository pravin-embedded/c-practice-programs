#include<stdio.h>
#include<string.h>
void Rev(char *);
int main()
{
    char s[50];
    fgets(s,50,stdin);
    int l=strlen(s);
    if(l>0 && s[l-1]=='\n')
        s[l-1]='\0';
    Rev(s);
    printf("%s\n",s);
}
void Rev(char *s)
{
    int t;
    char *start = s;
    char *end = strchr(s, ' ');
    end--;
    
    while(start < end)
    {
        t = *start;
        *start = *end;
        *end = t;
        start++;
        end--;
    }
}