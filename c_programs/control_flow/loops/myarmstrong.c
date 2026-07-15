//Check Armstrong number
//1^3 + 5^3 + 3^3 = 1+ 125 + 27 = 153
#include<stdio.h>
#include<math.h>
int main()
{
    int n, order=0, digit, i=0 ,b, ans=0,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("n = %d\n", n);
    b=n;
    while(n>0)
    {
        digit = n % 10;
        n = n/10;
        i++;
    }
    printf("The number of the digits are %d\n", i);
    while(b>0)
    {
        int p=1;
        int count=0;
        digit = b % 10;
        while(count<i)
        {
            p = p*digit;
            count++;
        }
        ans= ans+p;
        b = b/10;

    }
   printf("\n%d", ans);
}