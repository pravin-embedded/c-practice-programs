#include "header.h"
void display()
{
    struct student *temp;
    printf("Display: head = %p\n", (void *)head);
    if(head==NULL)
    {
        printf("List is empty");
        return;
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