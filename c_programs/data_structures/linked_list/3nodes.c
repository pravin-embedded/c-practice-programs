#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    int marks;
    struct student* link;
};
int main()
{
    struct student *head=NULL;
    struct student *temp=NULL;
    struct student *newnode=NULL;
    head = (struct student*)malloc(sizeof(struct student));
    head->id = 101;
    head->marks = 88;
    temp = (struct student*)malloc(sizeof(struct student));
    head->link = temp;
    temp->id = 202;
    temp->marks = 90;
    newnode = (struct student*)malloc(sizeof(struct student));
    temp->link = newnode;
    newnode->id = 303;
    newnode->marks = 100;
    newnode->link = NULL;
    temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp->id);
        printf("%d\n",temp->marks);
        printf("*******\n");
        temp = temp->link;
    }
    newnode = malloc(sizeof(struct student));
    newnode->id = 500;
    newnode->marks = 50;
    newnode->link = NULL;
    temp = head;
    while(temp->link != NULL)
    {
        temp=temp->link;
    }
    temp->link = newnode;

    temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp->id);
        printf("%d\n",temp->marks);
        printf("*******\n");
        temp = temp->link;
    }
    free(newnode);
    free(head);
}