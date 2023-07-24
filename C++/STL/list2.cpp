#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li = {1, 2, 3, 4, 5, 6};
    list<int> li2 = {3, 4, 5, 6, 7};
    // list<int>::iterator it, it2;
    // it = li.begin();
    // it2 = li.begin();
    // advance(it2, 3);
    // li.erase(it, it2);
    // li.remove(2);
    // li.reverse();
    // li.sort();
    // li.unique();
    // li.swap(li2);
    li.merge(li2);
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    // for (auto it : li2)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    return 0;
}