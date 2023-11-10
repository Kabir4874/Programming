#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    unordered_set<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        unordered_set<int>::iterator it = arr.find(k);
        if (it != arr.end())
        {
            arr.erase(it);
        }
        else
        {
            arr.insert(k);
        }
    }
    cout << arr.size() << endl;
    return 0;
}