#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    strcpy(c, "LIFE IS NOT A PROBLEM TO BE SOLVED");
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}