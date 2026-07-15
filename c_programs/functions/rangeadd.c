/*Input a range of integer. Write a program to list the all the numbers whose sum
of digits(reduced to single digit) is 9.
e.g Min:500 max:550 then list should print as
504(5+0+4), 513(5+1+3), .... 549(5+4+9=18(1+8=9)... etc.*/
/*In the above program make arrangement, to list only numbers which are
ascending-order-digits.
e.g.. 246 , 2345,22344, 4444 are valid
but 643, 2202, 456756 are not valid*/
#include<stdio.h>
int main()
{
    int min,max,i;
    printf("Enter the numbers: ");
    scanf("%d %d",&min,&max);
    for(int i=min;i<=max;i++)
    { 
        int temp=i;
        int lastdigit =10;
        int ascending=1;
        int val=temp;
        if(val%9==0)
        {
        while(val>0)
        {
            int d=val%10;
            if(d>lastdigit)
            {
                ascending=0;
                break;
            }
            lastdigit=d;
            val /= 10;
        }
        if(ascending==1)
        {
            printf("%d,",i);
        }
    }}
    printf("\n");
}