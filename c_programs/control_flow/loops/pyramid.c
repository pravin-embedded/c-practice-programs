#include<stdio.h>
int main()
{
    int n=7;
    for(int i=7; i>=1; i--){
          for(int j=1; j<=(n-i); j++){
            printf(" ");
          }
                for(int k=0; k<(2*i-1); k++){
                    printf("*");
    }
    printf("\n");
}
}