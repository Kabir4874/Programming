#include <stdio.h>
int main()
{
    char c;
    printf("Enter the letter: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("Upper Case\n");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("Lower Case\n");
    }
    return 0;
}