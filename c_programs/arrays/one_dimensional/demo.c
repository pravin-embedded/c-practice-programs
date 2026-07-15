#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int *p=a;
    printf("%p\n",p);
    for(int i=0;i<5;i++)
    {
        p[i]=p[i] * p[i];
    }
    printf("%d %d %d %d %d\n",*(a),*(a+1),*(a+2),*(a+3),*(a+4));
}