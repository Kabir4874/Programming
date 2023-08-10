#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    int s = (v.size() - 1) / 2;
    int e = v.size() - 1;
    int mid = s;
    int count = 0;
    while (s >= 0 && e > mid)
    {
        int x = v[s] * 2;
        if (x <= v[e])
        {
            count++;
            s--;
            e--;
        }
        else
        {
            s--;
        }
    }
    cout << n - count << endl;

    return 0;
}