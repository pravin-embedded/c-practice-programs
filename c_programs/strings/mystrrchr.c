/*Write a user-defined function to implement strrchr, which returns the last occurrence of a
character in a string. NOTE: use one loop only.*/
#include<stdio.h>
#include<string.h>
char *my_strrchr(char *s, int c,int len)
{
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]==(char)c){
        return &s[i];}
    }
}
int main()
{
    char s[50];
    fgets(s,50,stdin);
    int l=strlen(s);
    if(s[l-1]=='\n')
    {
        s[l-1]='\0';
    }
    char ch;
    scanf("%c",&ch);
    printf("%s\n",s);
    char *c=my_strrchr(s,ch,l);
    printf("Last occurance of the char is %d",(c-s));
}
