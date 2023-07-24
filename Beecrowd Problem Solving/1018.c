#include <stdio.h>
int main()
{
    int money, notes;
    scanf("%d", &money);
    printf("%d\n", money);
    printf("%d nota(s) de R$ 100,00\n", money / 100);
    notes = (money % 100);
    printf("%d nota(s) de R$ 50,00\n", notes / 50);
    notes = (notes % 50);
    printf("%d nota(s) de R$ 20,00\n", notes / 20);
    notes = (notes % 20);
    printf("%d nota(s) de R$ 10,00\n", notes / 10);
    notes = (notes % 10);
    printf("%d nota(s) de R$ 5,00\n", notes / 5);
    notes = (notes % 5);
    printf("%d nota(s) de R$ 2,00\n", notes / 2);
    notes = (notes % 2);
    printf("%d nota(s) de R$ 1,00\n", notes / 1);
    notes = (notes % 1);
    return 0;
}