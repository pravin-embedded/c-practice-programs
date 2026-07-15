#include<stdio.h>
struct Student
{
    int id;
    char name[20];
    float marks;
};
void Input(struct Student* );
void Print(struct Student* );
int main()
{
    struct Student v1[20];
    Input(v1);
    Print(v1);
}
void Input(struct Student* v1 )
{
    scanf(" %d",&v1->id);
    scanf(" %s",v1->name);
    scanf(" %f",&v1->marks);
}
void Print(struct Student* v1)
{
    printf("id=%d\n",v1->id);
    printf("name=%s\n",v1->name);
    printf("marks=%f\n",v1->marks);
}