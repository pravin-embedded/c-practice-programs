//Write a program to implement strcmp. Use your string comparison function to verify the string is
//palindrome or not.
#include<stdio.h>
#include<string.h>
void palindrome(char *,int);
int MyStrcmp(char *s1, char *s2);
int main()
{
    char s[50];
    fgets(s,50,stdin);
    int l=strlen(s);
    if(s[l-1]=='\n')
    {
        s[l-1]='\0';
        l--;
    }
    printf("%s\n",s);
    palindrome(s,l);

}
void palindrome(char *s,int size)
{
    char a[50];
    int j=0;
    for(int i=size-1;i>=0;i--)
    {
        a[j]=s[i];
        j++;
    }
    a[j]='\0';
    if((MyStrcmp(s,a))==0)
    printf("The string is palindrome");
    else
    printf("The string is not a palindrome");
}
int MyStrcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i]; 
        }
        i++;
    }
    return 0; 
}