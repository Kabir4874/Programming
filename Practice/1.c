#include <stdio.h>
int main()
{
    char ch[10000];
    scanf("%[^\n]s", ch);
    int n = 0, i = 0;
    while (ch[i] != '\0')
    {
        n++;
        i++;
    }
    int j, k = 0, l = 0;
    for (j = 0; j < n; j++)
    {
        if (ch[j] == 'a' || ch[j] == 'e' || ch[j] == 'i' || ch[j] == 'o' || ch[j] == 'u')
        {
            k++;
        }
        else if (ch[j] == 'A' || ch[j] == 'E' || ch[j] == 'I' || ch[j] == 'O' || ch[j] == 'U')
        {
            l++;
        }
    }
    printf("%d lower case vowel(s) and %d upper case vowel(s)\n", k, l);

    return 0;
}