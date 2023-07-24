#include <stdio.h>
void add(int a)
{
    printf("The address of the variable a is:%u\n", &a);
}
int main()
{
    int i = 4;
    printf("The value of the variable i is:%d\n", i);
    add(i);
    printf("The address of the variable i is:%u\n", &i);
    return 0;
}