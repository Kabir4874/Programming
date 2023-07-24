#include <stdio.h>
int main()
{
    FILE *ptr;
    int num, num1;
    ptr = fopen("pr.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    ptr = fopen("pr.txt", "w");
    num1 = num * 2;
    fprintf(ptr, "%d", num1);
    fclose(ptr);
    return 0;
}