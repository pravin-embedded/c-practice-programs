//Largest digit in number
//Input: 53829 → Output: 9
#include<stdio.h>
int main()
{
    int n,max_num=0,num=0;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    while(n>0)
    {
        num = n % 10;
        if (num>max_num)
        {
            max_num=num;
        }
        n = n/10;
    }
    printf("highest digit is %d",max_num);
}