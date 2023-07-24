#include <stdio.h>
void sumvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = *sum / 2;
}
int main()
{
    int x = 5, y = 6, sum;
    float avg;
    sumvg(x, y, &sum, &avg);
    printf("The sum of x and y is %d\n", sum);
    printf("The avg of x and y is %f\n", avg);
    return 0;
}