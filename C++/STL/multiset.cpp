#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms = {1, 2, 3, 4, 5, 2};
    // cout << ms.max_size() << endl;
    // cout << ms.size() << endl;
    // cout << ms.count(2) << endl;
    auto it = ms.lower_bound(8);
    cout << *it << endl;
    return 0;
}