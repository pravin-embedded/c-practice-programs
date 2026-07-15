#include<stdio.h>
int main()
{
    unsigned short int val=0xABCD;
    printf("%X\n",val);
    val=(((val&0x0f00)>>4)|((val&(0x00f0))<<4)|(val&0xf00f));
    printf("%X",val);
}