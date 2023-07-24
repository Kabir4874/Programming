#include <stdio.h>
int avg(int c);
int main()
{
    int c;
    printf("Enter temp in celcius");
    scanf("%d", &c);
    printf("The avg is:%d", avg(c));
    return 0;
}
int avg(int c)
{
    int f;
    f = (c * 1.8) + 32;
    return f;
}