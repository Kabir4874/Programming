#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> us;
    us.insert(1);
    us.insert(8);
    us.insert(3);
    us.insert(4);
    us.insert(2);
    for (auto it : us)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << us.bucket_count() << endl;
    cout << us.bucket(2) << endl;
    cout << us.bucket_size(1) << endl;
    return 0;
}