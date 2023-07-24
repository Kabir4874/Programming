#include <stdio.h>
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int result = sum(10, 32);
    printf("The sum of a+b is:%d", result);
    return 0;
}