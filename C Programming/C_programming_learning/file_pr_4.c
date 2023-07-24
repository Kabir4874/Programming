#include <stdio.h>
#include <string.h>
int main()
{
    int salary1, salary2;
    char name1[20];
    char name2[20];
    FILE *ptr;
    ptr = fopen("employee.txt", "w");
    printf("Enter the name of Employee 1: ");
    gets(name1);
    printf("Enter the name of Employee 2: ");
    gets(name2);
    printf("Enter the salary of Employee 1: ");
    scanf("%d", &salary1);
    printf("Enter the salary of Employee 2: ");
    scanf("%d", &salary2);
    fprintf(ptr, "%s, %d\n", name1, salary1);
    fprintf(ptr, "%s, %d\n", name2, salary2);

    fclose(ptr);

    return 0;
}