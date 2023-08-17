#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    s.insert(1);
    s.insert(56);
    s.insert(2);
    s.insert(7);
    s.insert(1);
    s.insert(7);

    for (auto i : s)
    {
        cout << i << endl;
    }

    return 0;
}