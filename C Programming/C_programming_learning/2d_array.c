#include <stdio.h>
int main()
{
    int student = 3;
    int sub = 3;
    int marks[3][3];
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("Enter the marks of the student %d in sub %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("The marks of the student %d in sub %d is:%d\n", i + 1, j + 1, marks[i][j]);
        }
    }
    return 0;
}