#include <stdio.h>
void change(int x, int *y);
int main()
{
    int a = 10, y;
    change(a, &y);
    printf("The value of a is %d", y);

    return 0;
}
void change(int x, int *y)
{
    *y = x * 10;
}