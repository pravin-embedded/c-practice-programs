#include<stdio.h>
struct Student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct Student v1;
    scanf(" %s",&v1.id);
    scanf(" %s",v1.name);
    scanf(" %f",&v1.marks);
    printf("id=%d\n",v1.id);
    printf("name=%s\n",v1.name);
    printf("marks=%f\n",v1.marks);
}