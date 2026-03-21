#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number you want to convert to the ASCII: ");
    scanf("%d", &num);
    printf("The number converrted is %d\n", num);
    printf("The conversion of %d is in ASCII is %c\n",num,num);
    return 0;
}