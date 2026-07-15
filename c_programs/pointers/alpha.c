#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cnt=0;
void Print(char *a,int size){
    for(int i=0;i<size;i++)
    {
       printf("%c, ",a[i]);
    }
    printf("\n");
}
void Value(char *a,int size){
    for(int i=0;i<26;i++)
    {
        a[i]=(rand()%26)+'A';
    }
}
void Vowel(char *a,int size){
    for(int i=0;i<26;i++){
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
        printf("%c ",a[i]);
        cnt++;}
    }
    printf("\nCount = %d",cnt);
}
int main()
{
    char *p;
    char a[26];
    p=a;
    srand(time(NULL));
    Value(p,26);
    Print(p,26);
    Vowel(p,26);
}