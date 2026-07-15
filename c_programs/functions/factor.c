#include<stdio.h>
void factor(int a)
{
    if(a==0){
        printf("For zero factor is 0\n");
        return ;
    }
    if(a<0){
        a=-a;
    }
    printf("The factors of %d are ",a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        printf("%d " ,i);
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    factor(n);
}