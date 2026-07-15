#include<stdio.h>
char* Mystrstr(char *s1,char *s2)
{
    int i=0;
    for(i=0;s1[i]!='\0';i++)
    {
        int j=0;
        while(s2[j]!='\0' && s1[i+j]==s2[j])
        {
            j++;
        }
        if(s2[j]=='\0')
        return &s1[i];
    }
    return NULL;
}
int main()
{
    char s1[]="vector india institute";
    char s2[]="ind";
    printf("%s\n",s1);
    char *c=(Mystrstr(s1,s2));
    printf("%ld",c-s1);
}