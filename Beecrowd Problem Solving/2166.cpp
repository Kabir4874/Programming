#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, k = 0.0;
    cin >> n;
    while (n--)
    {
        k = k + 2;
        k = 1 / k;
    }
    k = k + 1;
    cout << fixed << setprecision(10) << k << endl;

    return 0;
}