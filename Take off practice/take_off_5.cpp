#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, a, b, count = 0, count2 = 0;
    cin >> a >> b;
    int arr[a];
    for (i = 0; i < a; i++)
    {
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }
    for (i = 0; i < a - 1; i++)
    {
        for (j = i + 1; j < a; j++)
        {

            if (arr[i] + arr[j] >= b)
            {
                count++;
            }
        }
    }
    if (count >= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}