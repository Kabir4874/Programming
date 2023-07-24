#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p, p1;
    p = make_pair(10, 20);
    p1 = make_pair(10, 20);
    cout << p.first << " " << p.second << endl;
    if (p == p1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}