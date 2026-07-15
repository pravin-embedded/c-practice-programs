#include<stdio.h>
struct Stu
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct Stu s[3]= {
        {123,"Rahul",88.9},
        {234,"xys",90.8},
        {345,"ghkl",56.7}
    };
    FILE *fp = fopen("data.txt","w");
    fwrite(s,sizeof(s),1,fp);
    fclose(fp);
    struct Stu temp[3];
    FILE *fp1 =fopen("data.txt","r");
    fread(temp,sizeof(temp),1,fp1);
    for(int i=0;i<3;i++)
    {
    printf("%d %s %.1f\n",
       temp[i].id,
       temp[i].name,
       temp[i].marks);
    }
    fclose(fp1);
}