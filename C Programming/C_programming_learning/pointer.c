#include <stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a;

    printf("The value of ptr is: %u", ptr);
    ptr--;
    printf("The value of ptr is: %u", ptr);
    return 0;
}