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
    int n;
    cin >> n;
    vector<int> arr(n);
    bool ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] % 3 == 0 || arr[i] % 5 == 0)
            {
                ans = true;
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (ans)
    {
        cout << "APPROVED" << endl;
    }
    else
    {
        cout << "DENIED" << endl;
    }
    return 0;
}