#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int dif = INT_MIN;
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (max - arr[i + 1] > dif)
            {
                dif = max - arr[i + 1];
            }
        }
        cout << dif << endl;
    }
    return 0;
}