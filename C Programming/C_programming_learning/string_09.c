#include <stdio.h>
#include <string.h>
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char c[10000];
    printf("Enter Your Message: ");
    gets(c);
    encrypt(c);
    printf("Encrypted Message is: %s", c);
    return 0;
}