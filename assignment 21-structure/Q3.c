#include<stdio.h>
#include<string.h>
struct employee input();
void display();
struct employee
    {
        int id;
        char name[50];
        int salary;
    };
int main()
{
    int i;
    struct employee emp[5];
    printf("Enter five employee's id ,name and salary\n");
    for(i=0;i<5;i++)
        emp[i]=input();
    for(i=0;i<5;i++)
        display(emp[i]);
    return 0;
}
struct employee input()
{
    struct employee staff;
    printf("Enter employee id : ");
    scanf("%d",&staff.id);
    fflush(stdin);
    printf("Enter employee name : ");
    gets(staff.name);
    printf("Enter employee salary : ");
    scanf("%d",&staff.salary);
 return staff;
}
void display(struct employee staff)
{
    printf("%d %s %d\n",staff.id,staff.name,staff.salary);
}
