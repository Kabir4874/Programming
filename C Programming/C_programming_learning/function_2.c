#include <stdio.h>
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int main()
{
    int c, a, b;
    printf("Enter the value of A & B:");
    scanf("%d%d", &a, &b);
    c = sum(a, b);
    printf("The value of c is %d\n", c);
    return 0;
}
