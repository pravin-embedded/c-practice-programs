/*vector embedded hyd india"
"india hyd embedded vector"*/
#include<stdio.h>
#include<string.h>
void Reverse(char *s,char *end)
{
    char *p=s;
    char temp;
    while(p<end)
    {
        temp = *p;
        *p = *end;
        *end = temp;
        p++;
        end--;
    }
}
void Reversech(char *s)
{
    char *start = s;
    char *end;
     while((end = strchr(start, ' ')) != NULL)
    {
        Reverse(start, end - 1);
        start = end + 1;
    }

    Reverse(start, s + strlen(s) - 1);
}
int main()
{
    char s[]="vector embedded hyd india";
    int l=strlen(s);
    Reverse(s,(s+l-1));
    Reversech(s);
    printf("%s",s);
}