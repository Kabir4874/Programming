#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, k = 0.0;
    cin >> n;
    while (n--)
    {
        k += 6.0;
        k = 1.0 / k;
    }
    k += 3.0;
    cout << fixed << setprecision(10) << k << endl;
    return 0;
}