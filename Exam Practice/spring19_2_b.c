#include <stdio.h>
void CheckPrime(int n)
{
    int i, count = 0;
    if (n == 1 || n == 0)
    {
        printf("Not Prime\n");
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    CheckPrime(n);

    return 0;
}