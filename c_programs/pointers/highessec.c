#include<stdio.h>
void Highest_Lowest(int,int*,int*,int*,int*);
int main()
{
    int n, hd=-1,shd=-1,sd=10,ssd=10;
    printf("Enter the number: ");
    scanf("%d",&n);
    Highest_Lowest(n,&hd,&sd,&shd,&ssd);
    if(shd == -1 || ssd==10) {
        printf("All digits are same or only one digit supplied\n");
    } else {
        printf("Second highest = %d, Second lowest = %d\n", shd, ssd);
    }
    return 0;
}
void Highest_Lowest(int n,int *hd,int *sd,int *shd,int *ssd)
{
    int d;
    while(n)
    {
        d=n%10;
        if(d>*hd)
        {
            *shd=*hd;
            *hd=d;
        }
        else if (d > *shd && d < *hd) {
            *shd = d;
        }
        if(d<*sd)
        {
            *ssd=*sd;
            *sd=d;
        }
        else if (d < *ssd && d > *sd) {
            *ssd = d;
        }
        n/=10;
    }
}