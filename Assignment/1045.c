#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if ((a >= b + c) || (b >= a + c) || (c >= b + a))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((a * a == (b * b) + (c * c)) || (b * b == (a * a) + (c * c)) || (c * c == (b * b) + (a * a)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if ((a * a > (b * b) + (c * c)) || (b * b > (a * a) + (c * c)) || (c * c > (b * b) + (a * a)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if ((a * a < (b * b) + (c * c)) || (b * b < (a * a) + (c * c)) || (c * c < (b * b) + (a * a)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}