#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> ums;
    ums.insert(1);
    ums.insert(2);
    ums.insert(3);
    ums.insert(4);
    ums.insert(6);
    ums.insert(5);
    ums.insert(0);
    for (auto it : ums)
    {
        cout << it << " ";
    }
    return 0;
}