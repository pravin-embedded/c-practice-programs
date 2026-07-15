#include<stdio.h>
void Insert(struct Student*);
void Print(struct Student*);
enum grade
{
    FAIL,
    PASS,
    DISTINCTION
};
struct Student
{
    int id;
    char name[20];
    float marks;
    struct DateOfBirth
    {
        int day;
        int month;
        int year;
    }DOB;
    struct Addr
    {
        char city[20];
        char state[20];
        int pin;
    }Add;
    enum grade g;
};

int main()
{
    struct Student s1[100];
    while(1)
    {
        int choice;
        printf("Enter i.insert p.print f.find d.delete e.exit");
        scanf("%c",&choice);
        switch(choice)
        {
            case 'i':Insert(s1);
            break;
            case 'p':Print(s1);
            break;
            /*case 'f':Find(s1);
            break;
            case 'd':Delete(s1);
            break;*/
            case 'e':exit(1);
            break;
            default: printf("Invalid option");
            break;
        }
    }
}
void Insert(struct Student*s1)
{
    printf("Enter the ")
}