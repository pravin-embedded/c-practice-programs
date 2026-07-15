//Print positions of ALL set bits
#include<stdio.h>
int main()
{
    int ch=14;
    for(int i=7;i>=0;i--)
    {
        if(ch&(1<<i)) {
            printf("1");
        }
        else
        printf("0");
    }
    printf("\n");
    printf("Positions of set bits: ");
    for(int i = 0; i <= 7; i++) {
        if(ch & (1 << i)) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
}