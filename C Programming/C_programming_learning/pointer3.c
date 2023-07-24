#include <stdio.h>
int main()
{
    int a = 6;
    int *pnt = &a;
    printf("The address of the variable is:%u\n", pnt);
    printf("The value of the variable is:%d\n", *pnt);
    return 0;
}