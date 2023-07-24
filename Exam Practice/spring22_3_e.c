#include <stdio.h>
int multiple(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n == 3)
    {
        return 3;
    }
    long long int result = multiple(n - 1) * multiple(n - 2) * multiple(n - 3);
    return result;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int k = multiple(n);
    printf("%lld\n", k);
    return 0;
}