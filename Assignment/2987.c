#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    char i;
    int count = 0;
    for (i = 'A'; i <= ch; i++)
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}