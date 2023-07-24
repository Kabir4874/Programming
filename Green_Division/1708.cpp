#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    double n;
    cin >> a >> b;
    if (a > b)
    {
        c = a - b;
    }
    else
    {
        c = b - a;
    }
    n = ceil(b / c);
    cout << n << endl;
    return 0;
}