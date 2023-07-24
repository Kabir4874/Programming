#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});
    // mp.erase(1);
    // int count = mp.count(1);
    // cout << count << endl;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    auto it = mp.find(2);
    if (it != mp.end())
    {
        cout << "Find" << endl;
    }
    else
    {
        cout << "Not Find" << endl;
    }
    return 0;
}