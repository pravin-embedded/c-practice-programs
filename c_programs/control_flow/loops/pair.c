#include<stdio.h>
int main()
{
    int ch=14,pair_count=0;
    for(int i=7;i>=0;i--)
    {
         if(ch&(1<<i)) {
            printf("1");
        }
        else
        printf("0");
    }
        for(int i=7;i>=0;i--){
        if(ch&(1<<i)&& ch&(1<<(i-1))) {
            pair_count++;
            i--;
        }
        }
    
    printf("\n");
    printf("%d is the number of pair of set bit",pair_count);
}