#include <stdio.h>
int main()
{
    int a, b, d;
    float pi = 3.1415, c;
    scanf("%d%d", &a, &b);
    c = (4 * (pi * a * a * a)/3);
    d = b / c;
    printf("%d\n", d);

    return 0;
}