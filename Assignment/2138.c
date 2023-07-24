#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000];
    while (scanf("%s", &ch) != EOF)
    {
        int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int n = strlen(ch);
        int i;
        for (i = 0; i < n; i++)
        {
            if (ch[i] == '0')
            {
                arr[0]++;
            }
            else if (ch[i] == '1')
            {
                arr[1]++;
            }
            else if (ch[i] == '2')
            {
                arr[2]++;
            }
            else if (ch[i] == '3')
            {
                arr[3]++;
            }
            else if (ch[i] == '4')
            {
                arr[4]++;
            }
            else if (ch[i] == '5')
            {
                arr[5]++;
            }
            else if (ch[i] == '6')
            {
                arr[6]++;
            }
            else if (ch[i] == '7')
            {
                arr[7]++;
            }
            else if (ch[i] == '8')
            {
                arr[8]++;
            }
            else if (ch[i] == '9')
            {
                arr[9]++;
            }
        }
        int a = arr[0], index = 0;
        for (i = 1; i < 10; i++)
        {
            if (a <= arr[i])
            {
                a = arr[i];
                index = i;
            }
        }
        printf("%d\n", index);
    }
    return 0;
}