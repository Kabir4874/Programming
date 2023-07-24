#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s = {1, 2, 3, 4, 5};
    set<int> s1;
    s1 = s;
    for (auto it : s1)
    {
        cout << it << " ";
    }
    cout << endl;
    set<int>::iterator it, it1;
    it = s.lower_bound(2);
    it1 = s.upper_bound(4);
    cout << "The lower bound of 2 is: " << *it << endl;
    cout << "The upper bound of 4 is: " << *it1 << endl;

    return 0;
}