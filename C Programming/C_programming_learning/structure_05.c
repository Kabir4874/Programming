#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;
void show(emp emp1)
{
    printf("The Code of employee is: %d\n", emp1.code);
    printf("The Salary of employee is: %f\n", emp1.salary);
    printf("The Name of employee is: %s\n", emp1.name);
}
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    (*ptr).code = 123;
    (*ptr).salary = 3245;
    strcpy((*ptr).name, "Kabir");
    show(e1);

    return 0;
}