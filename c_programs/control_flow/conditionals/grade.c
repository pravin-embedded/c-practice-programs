#include<stdio.h>
int main()
{
	int math,sci,english,marks;
	printf("Enter your marks of Maths: \n");
	scanf("%d",&math);
	printf("Enter your marks of Science: \n");
        scanf("%d",&sci);
	printf("Enter your marks of English: \n");
        scanf("%d",&english);
	marks= (math+sci+english)/3;
	if(marks>80)
		printf("A Grade");
	else if(marks>=70)
		printf("B Grade");
	else if(marks>=60)
		printf("C Grade");
	else if(marks>=50)
		printf("D Grade");
	else
		printf("F Grade");
}
