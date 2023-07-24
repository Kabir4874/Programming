#include <stdio.h>
typedef struct complex
{
    int real;
    int complex;
} comp;
void display(comp c)
{
    printf("The value of the real part is: %d\n", c.real);
    printf("The value of the complex part is: %d\n", c.complex);
}
int main()
{
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for num %d:", i + 1);
        scanf("%d", &cnums[i].real);
        printf("Enter the complex value for num %d:", i + 1);
        scanf("%d", &cnums[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    return 0;
}