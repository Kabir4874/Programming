#include <stdio.h>
int main()
{
    int i = 564;
    int *ptr = &i;
    int **ptr_ptr = &ptr;
    printf("The value of i is:%d", **ptr_ptr);
    return 0;
}