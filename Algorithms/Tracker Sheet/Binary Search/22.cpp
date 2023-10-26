#include <bits/stdc++.h>
using namespace std;

bool checking(vector<int> &arr, int n, int m, int mid)
{
    int cnt = 1, temp = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        temp += arr[i];
        if (temp > mid)
        {
            cnt++;
            temp = arr[i];
        }
    }
    return cnt <= m;
}

int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int s = 1, e = INT_MAX, ans = -1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            bool check = checking(arr, n, m, mid);
            if (check)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        cout << "Case " << k << ": " << ans << endl;
    }
    return 0;
}
