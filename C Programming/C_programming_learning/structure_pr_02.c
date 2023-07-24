#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} vec;
vec sumvector(vec v1, vec v2)
{
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    vec v1, v2, sum;
    v1.x = 34;
    v1.y = 35;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
    v2.x = 334;
    v2.y = 3545;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
    sum = sumvector(v1, v2);
    printf("X dim of result is %d and Y dim of result is %d", sum.x, sum.y);
    return 0;
}