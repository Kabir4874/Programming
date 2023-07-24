#include <stdio.h>
void sq(int n, int *square, int *cube)
{
    *square = n * n;
    *cube = n * n * n;
}
int main()
{
    int n, square, cube;
    scanf("%d", &n);
    sq(n, &square, &cube);
    printf("%d %d\n", square, cube);

    return 0;
}