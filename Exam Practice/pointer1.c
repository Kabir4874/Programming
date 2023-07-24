#include <stdio.h>
int main()
{
    int x, y, *a, *b, temp;
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);
    a = &x;
    b = &y;
    temp = *b;
    *b = *a;
    *a = temp;
    printf("X: %d\nY: %d", x, y);
    return 0;
}