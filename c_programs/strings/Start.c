#include<stdio.h>
#include<string.h>
void Vowel(char *);
int isVowel(char );

void Print(char *,char *);
int main()
{
    char s[100];
    fgets(s,100,stdin);
    int l=strlen(s);
    if(s[l-1]=='\n')
    s[l-1]='\0';
    Vowel(s);
}
void Vowel(char *s)
{
    char *p=s;
    char *q=s;
    int cnt=0;

    while(*p!='\0')
    {
        q=p;
        while(*q!=' ' && *q!='\0')
        q++;

        if(isVowel(*p) && isVowel(*(q-1)))
        {
        char *t=p;

        while(t<q)
        {
        printf("%c",*t);
        t++;
        }
        printf(" ");
        cnt=1;
        }
    if(*q=='\0')
    break;

    p=q+1;
    }
if(cnt==0)
printf("not found");

}
int isVowel(char p)
{
    if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u')
    return 1;
    else
    return 0;
}
