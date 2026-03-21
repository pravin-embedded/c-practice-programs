#include<stdio.h>
int your_score(void)
{
	int a;
	printf("Enter your score: ");
	scanf("%d", &a);
	return a;
}
int main()
{
	int final_score;
	printf("Hello sir\n");
	final_score = your_score();
      printf("Your score is %d",final_score);
return 0;
}
