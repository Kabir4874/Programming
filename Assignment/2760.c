#include <stdio.h>
#include <string.h>
int main()
{
    char a[200], b[200], c[200];
    int i;
    gets(a);
    gets(b);
    gets(c);
    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);
    i = 0;

    while (a[i] != '\0' && i < 10)
    {
        printf("%c", a[i]);
        i++;
    }

    i = 0;

    while (b[i] != '\0' && i < 10)
    {
        printf("%c", b[i]);
        i++;
    }

    i = 0;

    while (c[i] != '\0' && i < 10)
    {
        printf("%c", c[i]);
        i++;
    }

    printf("\n");
    return 0;
}