//Write a program to find the second highest alphabet in a string.
#include<stdio.h>
#include<string.h>
int Secondhigh(char *,int );
int main()
{
    char s[]="cdbaefgh";
    int l=strlen(s);
    printf("%s\n",s);
    int sd=Secondhigh(s,l);
    printf("second highest=%c",sd);
}
int Secondhigh(char *s,int size)
{
    int hd=-1,sd=-1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>hd)
        {
            sd=hd;
            hd=s[i];
        }
        else if (s[i] > sd && s[i] < hd)
        {
            sd = s[i];
        }
    }
    return sd;
}
