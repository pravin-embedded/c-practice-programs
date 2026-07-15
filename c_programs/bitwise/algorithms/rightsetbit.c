//Input: 12 (1100)
//Output: 3    position from right starting 1
#include<stdio.h>
int main()
{
    int ch,cnt=1;
    printf("Enter the number: ");
    scanf("%d",&ch);
    if(ch==0)
    printf("No bit is set");
    else
    {
    while(ch>0)
    {
        if(ch & 1)
        {
            printf("Position=%d",cnt);
            break;
        }
        ch = (ch>>1);
        cnt++;

    }
}
    printf("\n");
}