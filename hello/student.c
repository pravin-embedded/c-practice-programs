#include<stdio.h>

void analyse(int id, float marks, char grade)
{
	printf("The id of the student is: %d\n", id);
	printf("The marks of the student is: %d\n",(int) marks);
	if(marks>=90)
                printf(" Your grade A\n");
        else if(marks<=90 && marks>=80)
                printf("Your grade B\n");
        else if(marks<=80 && marks>=60)
                printf("Your grade C\n");
        else if(marks<=60 && marks>=40)
                printf("Your grade E\n");
        else
                printf("Your are fail");
}
int main()
{
	int id;
	float marks;
	char grade;
printf("Enter your student id: ");
scanf("%d", &id);
printf("Enter your marks: ");
scanf("%f", &marks);

analyse(id, marks, grade);
return 0;
}
