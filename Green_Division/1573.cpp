#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, n;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        n = cbrt(a * b * c);
        cout << n << endl;
    }
    return 0;
}