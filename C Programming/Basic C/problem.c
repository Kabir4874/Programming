#include <stdio.h>
int maximum(int x, int y)
{
    int temp;
    if (x > y)
    {
        temp = x;
    }
    else
    {
        temp = y;
    }
}
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int t1, t2, t3;
    t1 = maximum(a, b);
    t2 = maximum(t1, c);
    t3 = maximum(t2, d);
    printf("The maximum number is:%d \n", t3);
    return 0;
}