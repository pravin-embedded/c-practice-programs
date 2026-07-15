#include<stdio.h>
#include<string.h>
void HideChar(char *,char);
int main()
{
        char s[30];
        char ch;
        int l=strlen(s);
        fgets(s,30,stdin);
        if((s[l-1]=='\n'))
                s[l-1]='\0';
        printf("Enter the charcter to mask:");
        scanf("%c",&ch);
        printf("%s",s);
        HideChar(s,ch);

        printf("%s",s);
}
void HideChar(char *s,char ch){
        while(s=strchr(s,ch)){
                if(*s>='a'||*s>='z'){
                        *s-=32;
        }
                else
                        *s+=32;
}
}