#include<stdio.h>
int main() {
int n=0;
char c='c';
float f=34.5;
n=sizeof(int);
printf("size of it %d\n",n);
printf("size of char c %lu\n",sizeof c);
printf("size of letter c %lu\n", sizeof 'c');
printf("size of number %lu\n", sizeof 34.5);
printf("size of float %lu\n", sizeof(float));
printf("size of float in commas %lu\n",sizeof("float"));
printf("size of nuber in double inverted commas%lu\n",sizeof("12.34"));
printf("size of letter c in double inverted commas%lu\n",sizeof("c"));
}
