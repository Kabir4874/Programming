#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPossible(int *floors, int n, int k, int mid)
{
    int allocated = 1;
    int prev_floor = floors[0];
    int i = 1;

    while (i < n && allocated < k)
    {
        if (floors[i] - prev_floor >= mid)
        {
            allocated++;
            prev_floor = floors[i];
        }
        i++;
    }

    return allocated >= k;
}

int maxMinDistance(int *floors, int n, int k)
{
    sort(floors, floors + n);
    int left = 1;
    int right = floors[n - 1] - floors[0];
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (isPossible(floors, n, k, mid))
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        int ans = maxMinDistance(arr, n, k);
        if (ans == -1)
        {
            cout << 0 << endl;
        }
        else
        {

            cout << ans << endl;
        }
    }
    return 0;
}