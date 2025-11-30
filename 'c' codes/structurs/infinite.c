#include <stdio.h>

struct employeeInfo
{
    int empID;
    char empName[50];
    double empSalary;
    char empDesignation[50];
};

int main()
{

    struct employeeInfo employees[100];
    char add = 'y';
    int i = 0;

    while (add == 'Y' || add == 'y')
    {
        printf("Enter employee Name = ");
        fgets(employees[i].empName, sizeof(employees[i].empName), stdin);

        printf("Enter employee Designation = ");
        fgets(employees[i].empDesignation, sizeof(employees[i].empDesignation), stdin);

        printf("Enter employee ID = ");
        scanf("%d", &employees[i].empID);
        getchar();

        printf("Enter employee Salary = ");
        scanf("%lf", &employees[i].empSalary);
        getchar(); 

        printf("Enter more data?(y/n): ");
        scanf(" %c", &add);
        getchar(); 

        i++;
        printf("\n");
    }

    printf("****All employee Information****\n");
    
    for (int j = 0; j < i; j++)
    {
        printf("Employee ID: %d\n", employees[j].empID);
        printf("Employee Name: %s", employees[j].empName);
        printf("Employee Designation: %s", employees[j].empDesignation);
        printf("Employee Salary: %.2f\n\n", employees[j].empSalary);
    }
    return 0;
}
