#include<stdio.h>
int main()
{
int num = 1;  // Use value 1, not 0x789451
int *p = &num;
unsigned char *cp = (unsigned char *)p;

if(*cp == 1)
    printf("little endian\n");  // First byte is 1
else
    printf("big endian\n");     // First byte is 0
}