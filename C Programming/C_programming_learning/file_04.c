#include <stdio.h>
int main()
{
    FILE *ptr;
    int number = 45;
    ptr = fopen("kabir.txt", "w");

    fprintf(ptr, "The number is: %d", number);
    fclose(ptr);
    return 0;
}