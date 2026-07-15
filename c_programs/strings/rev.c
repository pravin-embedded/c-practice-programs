/*Write your own strrev
Reverse a string without using library functions
Input:  "hello"
Output: "olleh"*/
#include<stdio.h>
#include<string.h>
void Reverse(char*,int size);
int main()
{
    char s[]="hello";
    int size=strlen(s);
    printf("%s\n",s);
    Reverse(s,size);
    printf("%s",s);
}
void Reverse(char*s,int size)
{
    char t;
    for(int i=0;i<size/2;i++)
    {
        t=s[i];
        s[i]=s[size-1-i];
        s[size - 1 - i] = t;
    }
}