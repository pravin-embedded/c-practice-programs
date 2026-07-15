//void *my_memcpy(void *dest, const void *src, size_t n);
#include<stdio.h>
#include<string.h>
void *Mymemcpy(void *,const void *,int );
int main()
{
    char s[]="hello";
    char s1[10];
    int l=strlen(s)+1;
    Mymemcpy(s1,s,l);
    printf("%s",s);
    printf("\n%s",s1);
}
    void *Mymemcpy(void *dst,const void *src,int size)
    {
        unsigned char *d=dst;
        const unsigned char *s=src;
        for(int i=0;i<size;i++)
        {
            ((char *)dst)[i]= ((char *)src)[i];
        }
        return dst;
    }
