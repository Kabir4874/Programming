#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    string k;
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            s.insert(k);
        }
        for (auto it : s)
        {
            cout << it << endl;
        }
    }
    return 0;
}