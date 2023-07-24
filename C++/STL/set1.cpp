#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int, greater<int>> s;
    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(9);
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    set<int>::iterator it;
    // it = s.begin();
    // advance(it, 2);
    // s.erase(it);
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    it = s.find(2);
    if (it != s.end())
    {
        cout << "Find" << endl;
    }
    else
    {
        cout << "Not Find" << endl;
    }
    int c = s.count(2);
    cout << c << endl;
    return 0;
}