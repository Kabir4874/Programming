#include <stdio.h>
int main()
{
    char c;
    printf("Enter the letter: ");
    scanf("%c", &c);
    if (c >= '0' && c <= '9')
    {
        printf("Digit\n");
    }
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        printf("Alphabet\n");
    }
    else
    {
        printf("Special Character\n");
    }
    return 0;
}