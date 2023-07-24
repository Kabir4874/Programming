#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("sample4.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exits.");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fclose(ptr);
        printf("The value of the file is:%d\n", num);
    }
    return 0;
}