#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while (cin >> n)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), greater<int>());
        int k;
        cin >> k;
        int ans = 0, ans2 = 0;
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i] + v[j] == k)
                {
                    int temp = abs(v[i] - v[j]);
                    if (temp <= min)
                    {
                        min = temp;
                        ans = v[i];
                        ans2 = v[j];
                    }
                }
            }
        }
        cout << "Peter should buy books whose prices are " << ans << " and " << ans2 << "." << endl
             << endl;
    }
    return 0;
}