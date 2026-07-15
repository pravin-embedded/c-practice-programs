#include "header.h"
#include<stdlib.h>
struct student *head = NULL;
void Addlast(void)
{
    struct student *newnode;
    struct student *temp;

    newnode = calloc(1,sizeof(struct student));
    if(newnode == NULL)
    {
        printf("Node not created");
        return;
    }
    else
    {
        /*** initialise the node ***/
		printf("enter the id\n");
		scanf("%d",&newnode->id);
		printf("enter the name\n");
		scanf("%s",newnode->name);
        printf("enter the marks\n");
		scanf("%f",&newnode->marks);
		
    }
    newnode->link = NULL;

    if(head==NULL)
    {
        head = newnode;
        return;
    }
    
    temp=head;

    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link=newnode;
}