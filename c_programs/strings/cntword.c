//Count the number of words in a given string.
#include<stdio.h>
#include<string.h>
int Cntword(char *,int);
int main()
{
    char s[100];
    fgets(s,100,stdin);
    int l=strlen(s);
    if(s[l-1]=='\n')
    s[l-1]='\0';
    int r=Cntword(s,l);
    printf("The words in this string is %d",r);
}
int Cntword(char *s,int l)
{
    int cnt=1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==32)
        {
            cnt++;
        }
    }
    return cnt;
}