#include<stdio.h>
int Mystrlen(char *);
int main()
{
    char s[30];
    fgets(s,30,stdin);
    printf("%s",s);
    int l=Mystrlen(s);
    printf("%d",l);
}
int Mystrlen(char *s){
    int i,len=0;
    for(i=0;s[i]!='\0';i++){
        len++;
    }
    return len;
}