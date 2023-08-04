#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> l;
    int arr2[l];
    for (int i = 0; i < l; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < l; i++)
    {
        int k = arr2[i];
        int m = 0;
        int x = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < k && arr[j] > m)
            {
                m = arr[j];
            }
            if (arr[j] > k && x > arr[j])
            {
                x = arr[j];
            }
        }
        if (m && x == INT_MAX)
        {
            cout << m << " "
                 << "X" << endl;
        }
        else if (m == 0 && x != INT_MAX)
        {
            cout << "X"
                 << " " << x << endl;
        }
        else
        {
            cout << m << " " << x << endl;
        }
    }

    return 0;
}