#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b;
    c = (a * b) + ((a - 1) * (b - 1));
    d = ((a - 1) * 2) + ((b - 1) * 2);
    cout << c << endl
         << d << endl;
    return 0;
}