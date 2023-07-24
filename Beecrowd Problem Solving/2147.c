#include <stdio.h>
#include<string.h>
int main()
{
    int i, n,j,k;
    char arr[10001];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &arr);
        k=strlen(arr);
        printf("%.2f\n", k/100.0);
    }

    return 0;
}