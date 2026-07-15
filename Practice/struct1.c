/*Question
Write a complete C program to:
Define a structure Student containing:
rollno
name
marks
Read details of 5 students.
Find and display the student having the highest marks.
*/
#include<stdio.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
void Detail(struct Student *);
void Highest(struct Student *);
int main()
{
    struct Student S[5];
    struct Student *p;
    p = S; /* point to first element of array */
    Detail(p);
    Highest(p);
    return 0;
}
void Detail(struct Student *p)
{
    for(int i=0;i<5;i++)
    {
        printf("Enter the roll no of student\n");
        scanf("%d",&p[i].rollno);
        printf("Enter the name of student\n");
        scanf("%19s",p[i].name);
        printf("Enter the marks of student\n");
        scanf("%f",&p[i].marks);
        printf("Done for student %d\n",i+1);
    }
}
void Highest(struct Student *p)
{
    int max_index = 0;
    for (int i = 1; i < 5; i++) {
        if (p[i].marks > p[max_index].marks) {
            max_index = i;
        }
    }
    printf("\nStudent with highest marks:\n");
    printf("Roll no: %d\n", p[max_index].rollno);
    printf("Name: %s\n", p[max_index].name);
    printf("Marks: %.2f\n", p[max_index].marks);
} 