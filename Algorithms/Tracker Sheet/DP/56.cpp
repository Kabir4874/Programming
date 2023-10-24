#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans[n];
    ans[0] = 0;
    ans[1] = abs(arr[1] - arr[0]);
    for (int i = 2; i < n; i++)
    {
        int temp1 = ans[i - 1] + abs(arr[i] - arr[i - 1]);
        int temp2 = ans[i - 2] + abs(arr[i] - arr[i - 2]);
        ans[i] = min(temp1, temp2);
    }
    cout << ans[n - 1] << endl;

    return 0;
}