#include<stdio.h>
void pstatic();
int main()
{
    printf("Inside the main\n");
    pstatic();pstatic();pstatic();
}
void pstatic()
{
    static int x=1;//it only stored at ones in data segment ans used/updated as needed throughout the function.
    x++;// as 1 is overwritten by 2 in data segment.
    printf("%d\n",x);
}