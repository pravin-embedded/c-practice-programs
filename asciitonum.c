#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the number you want to convert for ASCII: ");
    scanf("%c", &ch);
    printf("The number converrted is %c\n", ch);
    printf("The conversion of %c is in num is %d and hex for it is %x\n",ch,ch,ch);
    return 0;
}