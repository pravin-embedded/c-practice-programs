#include<stdio.h>
#include<stdlib.h>
#define Max 5
int cnt;
struct Student
{
    int id;
    char name[20];
    float marks;
};
void Input(struct Student *);
void Print(struct Student *);
void Find(struct Student *);
void Sort(struct Student *v1);
int main()
{
    char choice;
    struct Student v1[Max];
    while(1)
    {
    printf("Enter i insert, p print, f find, s sort, d delete, e exit\n");
    printf("Enter your choice:\n");
    scanf(" %c",&choice);
    switch(choice)
    {
        case 'i': Input(v1);
        break;
        case 'p': Print(v1);
        break;
        case 'f': Find(v1);
        break;
        case 's': Sort(v1);
        break;
        /*case 'd': Delete(v1);
        break;*/
        case 'e': exit(1);
        
    }
}
}
void Input(struct Student *v1)
{
        if(cnt==Max)
        {
            printf("The database if full\n");
            return;
        }
        printf("Enter the id of student: \n");
        scanf(" %d",&v1[cnt].id);
        printf("Enter the name of student: \n");
        scanf(" %s",v1[cnt].name);
        printf("Enter the marks of student: \n");
        scanf(" %f",&v1[cnt].marks);
        cnt++;
}
void Print(struct Student *v1)
{
        if(cnt==0)
        {
            printf("Database is empty\n");
        }
    for(int i=0;i<cnt;i++)
    {
        printf("Student id =%d\n",v1[i].id);
        printf("Student name =%s\n",v1[i].name);
        printf("Student marks =%f\n",v1[i].marks);
        printf("**********************\n");
    }
}
void Find(struct Student *v1)
{
    int fd,found=0;
    printf("Enter id to find:\n");
    scanf(" %d",&fd);
    for(int i=0;i<cnt;i++)
    {
        if(v1[i].id==fd)
        {
        printf("\nstudent id=%d\n",v1[i].id);
        printf("student name=%s\n",v1[i].name);
        printf("student marks=%f\n",v1[i].marks);
        found=1;
        break;
        }
        
    }
    if(found==0)
    printf("NO data found with same id number");
}
void Sort(struct Student *v1)
{
    struct Student temp;
    for(int i=0;i<cnt;i++)
    {
        for(int j=0;j<cnt-1;j++)
        {
            if(v1[j].id>v1[j+1].id )
            {
                temp = v1[j];
                v1[j]=v1[j+1];
                v1[j+1]=temp;
            }
        }
    }
}