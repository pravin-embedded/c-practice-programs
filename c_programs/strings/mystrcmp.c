#include<stdio.h>
int Comp(const char*,const char*);
int main()
{
char s[]="apple";
char s1[]="Apple";
int result=Comp(s,s1);
if(result==0)
printf("Strings are equal\n");
else if(result<0)
printf("Apple comes before Banana\n");
else
printf("Apple comes after Banana\n");
}
int Comp(const char*s,const char*s1)
{
    int i=0;
    while(s[i]==s1[i])
    {
        if(s[i]=='\0')
        {
            return 0;
        }
        i++;
    }
    return s[i]-s1[i];
}