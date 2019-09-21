#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char name[20];
    int hireDate;
    float salary;
};

int main()
{
    struct employee employee1;
    strcpy(employee1.name, "John");
    employee1.hireDate = 25;
    employee1.salary = 13.50;

    printf("\nEmployee Name: %s\nHire Date: %d\nSalary: %.2f\n", employee1.name, employee1.hireDate, employee1.salary);

    struct employee employee2;

    char emp2Name[20];
    printf("\nEnter the employee name: \n");
    gets(emp2Name);

    int emp2HireDate;
    printf("\nEnter the employee's start date: \n");
    scanf("%d", &emp2HireDate);

    float emp2Salary;
    printf("\nEnter the employee's salary: \n");
    scanf("%f", &emp2Salary);

    strcpy(employee2.name, emp2Name);
    employee2.hireDate = emp2HireDate;
    employee2.salary = emp2Salary;

    printf("\n\n\n");
    printf("\nEmployee Name: %s\nHire Date: %d\nSalary: %.2f\n", employee2.name, employee2.hireDate, employee2.salary);

    return 0;
}
