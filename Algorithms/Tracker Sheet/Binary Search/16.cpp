#include <bits/stdc++.h>
using namespace std;
bool checkMid(int arr[], int n, int mid)
{
    int k = mid;
    for (int i = 1; i < n + 1; i++)
    {
        int temp = arr[i] - arr[i - 1];
        if (temp == k)
        {
            k--;
        }
        else if (temp > k)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        arr[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
        }
        int s = 0;
        int e = INT_MAX;
        int ans = 0;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            bool temp = checkMid(arr, n, mid);
            if (temp)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        cout << "Case " << i++ << ": " << ans << endl;
    }
    return 0;
}