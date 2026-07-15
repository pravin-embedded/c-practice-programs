#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
    struct student *link;
};
extern struct student *head;
void Addlast(void);
void display(void);
void delete(void);