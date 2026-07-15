#include "header.h"
#include <stdlib.h>
void delete()
{
    struct student *temp;
    struct student *prev;
   
    if(head==NULL)
    {
        printf("List is empty");
        return;
    }
    if(head->link == NULL)
    {
    free(head);
    head = NULL;
    return;
    }
    temp = head;
    prev = NULL;
    while(temp->link != NULL)
    {
    prev=temp;
    temp = temp->link;
    //head = head->link;
    }
    prev->link= NULL;
    free(temp);
}