#include<stdio.h>
#include<string.h>
void *my_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    if(d < s)
    {
        // forward copy
        for(int i = 0; i < n; i++)
            d[i] = s[i];
    }
    else
    {
        // backward copy
        for(int i = n-1; i >= 0; i--)
            d[i] = s[i];
    }

    return dest;
}
int main()
{
    char s[] = "abcdef";
    my_memmove(s+3, s, 4);
    printf("%s", s); 
}