#include "header.h"

int main()
{
    int choice;
    int id, marks;

    while(1)
    {
        printf("\n******** Student Database ********\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Delete\n");
        printf("4. Exit\n");

        printf("Enter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:Addlast();
            break;

            case 2:display();
            break;

            case 3:delete();
            break;
            
            case 4:return 0;
            default:
            printf("Invalid Choice\n");
        }
    }
}