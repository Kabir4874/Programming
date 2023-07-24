#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, int> mp;
    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});
    mp.insert({5, 50});
    mp.insert({1, 60});
    // auto it = mp.begin();
    // advance(it, 2);
    // mp.erase(it);
    // cout << mp.count(1) << endl;
    auto it = mp.lower_bound(1);
    cout << (*it).first << " " << (*it).second << endl;

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}