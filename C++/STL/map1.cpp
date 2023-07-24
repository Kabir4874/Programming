#include <bits/stdc++.h>
using namespace std;
int main()
{
    // map<int, int> mp;
    // mp.insert({1, 10});
    // mp.insert({2, 20});
    // mp.insert({3, 30});
    // mp.insert({4, 40});
    // cout << mp.at(1) << endl;
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // map<int, int>::iterator it;
    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // map<int, string> mp;
    // mp.insert({1, "abcd"});
    // mp.insert({2, "efgh"});
    // mp.insert({3, "ijkl"});
    // mp.insert({4, "mnop"});
    // map<int, string>::iterator it;
    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    map<string, int> mp;
    mp["abc"] = 1;
    mp["def"] = 2;
    mp["ghi"] = 3;

    map<string, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}