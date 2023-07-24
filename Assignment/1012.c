#include <stdio.h>
int main()
{
    double a, b, c, e, f, g, h, i, pi = 3.14159;
    scanf("%lf%lf%lf", &a, &b, &c);
    e = 0.5 * a * c;
    f = pi * c * c;
    g = ((a + b) / 2) * c;
    h = b * b;
    i = a * b;
    printf("TRIANGULO: %.3lf\n", e);
    printf("CIRCULO: %.3lf\n", f);
    printf("TRAPEZIO: %.3lf\n", g);
    printf("QUADRADO: %.3lf\n", h);
    printf("RETANGULO: %.3lf\n", i);

    return 0;
}