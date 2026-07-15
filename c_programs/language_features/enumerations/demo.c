#include<stdio.h>
enum days {Sun=1,Mon,Tue,Wed,Thu=3,Fri,Sat};
int main()
{
    enum days d;
    int input_val; 
    scanf("%d", &input_val);
    d = (enum days)input_val;
    if(d==Sun)
    printf("Sunday\n");
    else if(d==Mon)
    printf("Monday\n");
    else if(d==Tue)
    printf("Tuesday\n");
    else if(d==Wed)
    printf("Wednesday\n");
    else if(d==Thu)
    printf("Thusday\n");
    else if(d==Fri)
    printf("Friday\n");
    else if(d==Sat)
    printf("Saturday\n");
    else 
    printf("Invalid day\n");
}