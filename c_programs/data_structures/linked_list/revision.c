#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int id;
    char name[20];
    float marks;
    struct Student *link;
};
int main()
{
    struct Student *head = NULL;
    while(1)
    {
    struct Student *newnode;
    struct Student *temp;
    newnode = malloc(1*sizeof(struct Student));

    printf("Enter the id:\n");
    scanf("%d",&newnode->id);
    printf("Enter the name:\n");
    scanf("%s",newnode->name);
    printf("Enter the marks:\n");
    scanf("%f",&newnode->marks);
    newnode->link = NULL;

    if(head == NULL)
    {
        head = newnode;
        //return;
    }
    else
    {
    temp=head;
    while ((temp->link!=NULL))
    {
        temp=temp->link;
    }
    temp->link=newnode;
    }

    temp = head;
    while(temp != NULL)
    {
        printf("ID     :%d\n",temp->id);
        printf("Name   :%s\n",temp->name);
        printf("Marks  :%f\n",temp->marks);
        printf("---------------\n");
        temp = temp->link;
    }
}
    free(head);
}