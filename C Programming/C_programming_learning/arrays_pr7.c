#include <stdio.h>
void printTable(int *multable, int num, int n)
{
    printf("The Multiplication Table of %d is:\n", num);

    for (int i = 0; i < n; i++)
    {
        multable[i] = num * (i + 1);
        printf("%d X %d = %d\n", num, i + 1, multable);
    }
    printf("*************************************\n\n");
}
int main()
{
    int m, n;
    printf("Enter the multiplication table of:");
    scanf("%d", &m);
    printf("Enter the limit of multiplication talbe:");
    scanf("%d", n);

    int multable[m][n];
    printTable(multable[m], 2, n);
    printTable(multable[m], 7, n);
    printTable(multable[m], 9, n);

    return 0;
}