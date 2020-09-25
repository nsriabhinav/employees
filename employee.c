#include <stdio.h>
 

struct employee{
    char    name[30];
    int     age;
    int     phone_num;
    float   salary;
};
 
int main()
{

    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("Age ?:");            scanf("%d",&emp.age);
    printf("Phone Number ?:");          scanf("%d",&emp.phone_num);
    printf("Salary ?:");        scanf("%f",&emp.salary);
     
    printf("\nEntered detail is:");
    printf("\nName: %s"   ,emp.name);
    printf("\nAge: %d"     ,emp.age);
    printf("\nPhone Number: %d"    ,emp.phone_num);
    printf("\nSalary: %f",emp.salary);
    return 0;
}
