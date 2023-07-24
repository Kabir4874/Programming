#include <stdio.h>
#include <string.h>
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[10000];
    printf("Enter Encrypted Message: ");
    gets(c);
    decrypt(c);
    printf("Decrypted Message is: %s", c);
    return 0;
}