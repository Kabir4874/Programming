#include <stdio.h>
int main()
{
    int i;
    char arr[5];
    for (i = 0; i < 5; i++)
    {
        scanf(" %c", &arr[i]);
    }
    printf("Vowels:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%c\n", arr[i]);
    }
    return 0;
}