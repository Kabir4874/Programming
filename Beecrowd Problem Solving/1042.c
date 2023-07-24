#include <stdio.h>
int main()
{
    int a, b, c, aux, i, j;
    scanf("%d%d%d", &a, &b, &c);
    int v[3];
    v[0] = a;
    v[1] = b;
    v[2] = c;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}