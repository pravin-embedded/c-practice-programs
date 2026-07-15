#include<stdio.h>
union Data
{
    long long int x;
    char y;
};
int main()
{
    union Data v;
    scanf("%d",&v.x);
    //printf("%c\n%d",v.x,v.y);
    printf("%zu",sizeof(v));
}