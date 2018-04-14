#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
};

void Display (struct student stu);

int main()
{
    struct student s1;
    printf("Enter student's name : ");
    scanf("%s",&s1.name);
    printf("Enter roll number : ");
    scanf("%d",&s1.roll);
    Display(s1);
    return 0;
}

void Display (struct student stu)
{
    printf("Output \n Name : %s",stu.name);
    printf("\nRoll : %d",stu.roll);
}
