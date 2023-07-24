#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (cin >> t)
    {
        int a, b;
        cin >> a >> b;
        int arr1[a][t], arr2[b][t];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < t; j++)
            {
                cin >> arr1[i][j];
            }
        }
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < t; j++)
            {
                cin >> arr2[i][j];
            }
        }
        int c, d, n;
        cin >> c >> d >> n;
        if (arr1[c - 1][n - 1] > arr2[d - 1][n - 1])
        {
            cout << "Marcos" << endl;
        }
        else if (arr1[c - 1][n - 1] < arr2[d - 1][n - 1])
        {
            cout << "Leonardo" << endl;
        }
        else
        {
            cout << "Empate" << endl;
        }
    }
    return 0;
}