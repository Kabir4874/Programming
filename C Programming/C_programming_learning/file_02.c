#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("sample.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    printf("The value of the file is:%d\n", num);
    return 0;
}