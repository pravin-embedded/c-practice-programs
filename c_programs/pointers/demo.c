#include<stdio.h>
int main()
{
    int y=40;
    char *q=(char*)&y;
    printf("%d",q+3);
}
