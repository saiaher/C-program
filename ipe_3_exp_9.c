#include <stdio.h>

struct employee {
    int id;
    char name[50];
    int age;
    float salary;
};

int main() {
    struct employee emp;

    printf("Enter employee id: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf(" %s", emp.name);  

    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details:\n");
    printf("ID     : %d\n", emp.id);
    printf("Name   : %s\n", emp.name);
    printf("Age    : %d\n", emp.age);
    printf("Salary : %f\n", emp.salary);

    return 0;
}
