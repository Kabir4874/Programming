#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[100];
};
int main()
{
    struct employee e1, e2, e3;
    printf("Enter the employee code for e1: ");
    scanf("%d", &e1.code);
    printf("Enter the employee salary e1: ");
    scanf("%f", &e1.salary);
    printf("Enter the employee name e1: ");
    scanf("%s", &e1.name);
    printf("Enter the employee code for e2: ");
    scanf("%d", &e2.code);
    printf("Enter the employee salary e2: ");
    scanf("%f", &e2.salary);
    printf("Enter the employee name e2: ");
    scanf("%s", &e2.name);
    printf("Enter the employee code for e2: ");
    scanf("%d", &e2.code);
    printf("Enter the employee salary e2: ");
    scanf("%f", &e2.salary);
    printf("Enter the employee name e2: ");
    scanf("%s", &e2.name);

    return 0;
}