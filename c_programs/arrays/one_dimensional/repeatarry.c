/*First data in input is number of elements and then remaining data is input for array*/
#include<stdio.h>
void Repeat(int a[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Repeat(a,n);
}
void Repeat(int a[],int n)
{
    int found=0;
    for(int i=0;i<n;i++)
    {
        int isRepeat = 0;
        int alreadyprinted = 0;
        for(int k=0;k<i;k++)
        {
            if(a[i]==a[k])
            {
                alreadyprinted=1;
                break;
            }
        }
        if(alreadyprinted) continue;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                isRepeat =1;
                break;
            }
        }
        if(isRepeat)
        {
            printf("%d",a[i]);
            found=1;
        }
            if(!found)
            printf("no repeated elements");
    }
printf("\n");
}
