#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int cnt;
void Print(char (*)[10]);
void Insert(char (*c)[10]);
void Sort(char (*c)[10]);
int main()
{
    char color[5][10];
    char choice;
    while(1)
    {
        printf("Enter i.insert, p.print,s.sort, e.exit\n");
        printf("Enter the choice: ");
        __fpurge(stdin);
        scanf("%c",&choice);
        switch(choice)
        {
        case 'i' :Insert(color);
            break;
        case 'p' :Print(color);
            break;
        case 's' :Sort(color);
            break;
        case 'e':
            return 0;
        }
    }
}
void Insert(char (*c)[10])
{
    if(cnt==5)
    {
        printf("The string is full");
        return;
    }
    scanf(" %s",c[cnt]);
    cnt++;
}
void Print(char (*c)[10])
{
    for(int i=0;i<cnt;i++)
    {
        printf("%s\n",c[i]);
    }
}
void Sort(char (*c)[10])
{
    char temp[20];
    for(int i=1;i<cnt;i++)
    {
        for(int j=0;j<cnt-1;j++)
        {
            if(strlen(c[j])>strlen(c[j+1]))
            {
                strcpy(temp,c[j]);
                strcpy(c[j],c[j+1]);
                strcpy(c[j+1],temp);
            }
        }
    }
}