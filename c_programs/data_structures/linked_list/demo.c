#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=NULL;
    struct node *temp=NULL;
    temp=( struct node *)malloc(sizeof(struct node));
    head=( struct node *)malloc(sizeof(struct node));

    head->data = 25;
    head->link = temp;

    temp->data = 50;
    temp->link = NULL;

    temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);

        temp = temp->link;
    }
    free(head);
}