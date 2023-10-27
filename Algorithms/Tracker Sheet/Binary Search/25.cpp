#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool checking(vector<int> &arr, int n, int mid, int k)
{
    int cnt = 0, temp = 0;
    for (int i = n - 1; i >= temp; i--)
    {
        if (arr[i] + arr[temp] <= mid)
        {
            temp++;
        }
        cnt++;
    }
    return cnt <= k;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = arr[n - 1], e = arr[n - 1] * 2;
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        bool check = checking(arr, n, mid, k);
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
    cout << ans << endl;
    return 0;
}