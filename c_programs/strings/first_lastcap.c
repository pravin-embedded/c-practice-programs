/*vector embedded hyderabad india"
"VectoR EmbeddeD HyderabaD IndiA*/
#include<stdio.h>
#include<string.h>
void CapFL(char *);
int main()
{
    char s[]="vector embedded hyderabad india";
    printf("%s\n",s);
    CapFL(s);
    printf("%s",s);
}
void CapFL(char *s)
{
    char *p;p=s;
    char *q;q=s;
    while((p=strchr(q,' '))!=NULL)
    {
        if(*q>='a' && *q<='z')
        *q-=32;
        if(*(p-1)>='a' && *(p-1)<='z')
        *(p-1)-=32;   
        q=p+1;
    }
    if (*q >= 'a' && *q <= 'z') 
        *q -= 32;
    
    char *last_char = s + strlen(s) - 1;
    if (*last_char >= 'a' && *last_char <= 'z') 
        *last_char -= 32;
}
