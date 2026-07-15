#include<stdio.h>
#include<math.h>
int IsPrime(int n)
{
    int s;
    s=sqrt(n);
    for(int i=n;i>=s;i--)
    {
        if(i==n)
        continue;
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int min,max;
    printf("Enter the numbers: ");
    scanf("%d %d",&min,&max);

    for(;max>=min;max--)
    if(max == 1) 
        {
            // Do nothing, just let the loop end
        }
        else if(max == 2)
        {
            printf("2,");
            // No max = 3 here, or it will loop forever!
        }
        else if(max % 2 == 0)
        {
            continue; // Skip even numbers
        }
        else{
        if(IsPrime(max))
        printf("%d,",max);
    }}
    