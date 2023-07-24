#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        double k, l;
        k = 1 + 8 * n;
        l = (-1 + sqrt(k)) / 2;
        long long int x = floor(l);
        cout << x << endl;
    }
    return 0;
}