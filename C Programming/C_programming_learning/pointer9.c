#include <stdio.h>
int main()
{
    int mark[5];
    int *ptr = &mark[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the mark of student no. %d", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks for student %d is:%d\n", i + 1, mark[i]);
    }
    return 0;
}