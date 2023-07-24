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
    struct employee Harry = {1, 23.45, "Harry"};
    printf("Code is: %d\n", Harry.code);
    printf("salary is: %f\n", Harry.salary);
    printf("name is: %s\n", Harry.name);
    return 0;
}