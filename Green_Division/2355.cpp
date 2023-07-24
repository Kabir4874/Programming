#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, l;
    while (cin >> n && n)
    {
        double x = n / 90.0;
        k = floor(x);
        l = ceil(x * 7);
        cout << "Brasil " << k << " x Alemanha " << l << endl;
    }
    return 0;
}