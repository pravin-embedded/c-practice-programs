/*Input:  "Hi 123 world"
Output:
vowels = 2
consonants = 6
digits = 3
spaces = 2*/
#include<stdio.h>
#include<string.h>
void Alpha(const char *,int);
int main()
{
    char s[30];
    fgets(s,30,stdin);
    printf("%s",s);
    Alpha(s,30);
}
    void Alpha(const char *s,int size)
    {
        int cnt=0,count=0,space=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            cnt++;
            else if(s[i]>='a'&& s[i]<='z')
            count++;
            else if(s[i]==' ')
            space++;
        }
        printf("cnt=%d,count=%d,space=%d",cnt,count,space);
    }