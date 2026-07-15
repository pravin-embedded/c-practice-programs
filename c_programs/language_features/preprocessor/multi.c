/*Write:
#define MUL(a,b) a*b
Use:
MUL(2+3, 4+1)*/
#include<stdio.h>
#define MUL(a,b) (a)*(b)
int main()
{
    printf("%d",MUL(2+3, 4+1));
}