#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, k;
    cin >> n;
    double x = (1 + sqrt(5)) / 2;
    double y = (1 - sqrt(5)) / 2;
    double p = pow(x, n);
    double q = pow(y, n);
    k = (p - q) / sqrt(5);
    cout << fixed << setprecision(1) << k << endl;
    return 0;
}