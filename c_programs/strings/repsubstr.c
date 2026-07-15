/*Input:
str = "aaaaa"
sub = "aa"
Output:
"****a"*/
#include<stdio.h>
#include<string.h>
void RepSubstr(char *,char *);
int main()
{
    char s[]="aaaaa";
    char s1[]="aa";
    printf("%s\n",s);
    RepSubstr(s,s1);
    printf("%s",s);
}
void RepSubstr(char *s,char* s1)
{
    int l=strlen(s1);
    char *p;
    while((p=strstr(s,s1))!=NULL)
    {
       for (int j = 0; j < l; j++) {
            p[j] = '*'; 
        }
    }
}