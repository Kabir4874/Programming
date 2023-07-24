#include <stdio.h>
int main()
{
    char x, y;
    int i;
    scanf("%c %c", &x, &y);
    for (i = x; i <= y; i++)
    {
        printf("%d ", i);
    }
}