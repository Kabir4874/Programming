#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n, k;
    cin >> n >> k;
    vector<int> arr(1000, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }
    int cnt = 0;
    for (int i = 1; i <= k; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cnt++;
        }
    }
    cout << (n - cnt / 2) << endl;

    return 0;
}