#include <stdio.h>
int main()
{
    int a, b, c;
    float d, pi = 3.1415;
    scanf("%d%d", &a, &b);
    d = (4 * (pi * a * a * a) / 3);
    c = b / d;
    printf("%d\n", c);

    return 0;
}