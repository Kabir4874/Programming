#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            printf("%d is Zero\n", i);
        }
        else if (i % 2 == 0)
        {
            printf("%d id even\n", i);
        }
        else
        {
            printf("%d id odd\n", i);
        }
    }
    return 0;
}