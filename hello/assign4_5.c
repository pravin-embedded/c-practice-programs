#include<stdio.h>
int main(){
int i=20.5;
float f=20.4;
int result;
result= i==f;
printf("%d\n", result);
result=i==(int)f;
printf("result2 = %d\n", result);
result= (float)i==f;
printf("result3 = %d\n", result);
result=i<f;
printf("result4 = %d\n", result);
result=i<(int)f;
printf("result5 = %d\n", result);
}
