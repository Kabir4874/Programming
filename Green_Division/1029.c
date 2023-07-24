#include <stdio.h>
int count;
int fib(int n)
{
    count++;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        count = 0;
        int k = fib(n);
        printf("fib(%d) = %d calls = %d\n", n, count - 1, k);
    }

    return 0;
}