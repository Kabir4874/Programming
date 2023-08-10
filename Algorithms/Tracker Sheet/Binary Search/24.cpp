#include <bits/stdc++.h>
using namespace std;
bool Search(vector<int> v, int n, int i)
{
    int s = i, e = n - 1, mid;
    int temp = v[i] * 2;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (temp <= v[mid])
        {
            return true;
        }
        else
        {
            s = mid + 1;
        }
    }
    return false;
}
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
    int len = n;
    for (int i = 0; i < len; i++)
    {
        bool ans = Search(v, len, i);
        if (ans)
        {
            v.erase(v.begin());
            len = v.size();
            i = max(-1, i - 2);
        }
    }
    cout << v.size() << endl;
    return 0;
}