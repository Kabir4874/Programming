#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            v[i] = arr[i];
        }
        sort(v, v + n);
        int k = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            int min = v[i];
            int x = 0;
            while (1)
            {
                if (arr[x] == min)
                {
                    break;
                }
                x++;
            }
            for (int j = x; j > i; j--)
            {
                swap(arr[j], arr[j - 1]);
                count++;
                if (count == n - 1)
                {
                    break;
                }
            }
            if (count == n - 1)
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}