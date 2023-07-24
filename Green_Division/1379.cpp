#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    while (cin >> a >> b && a && b)
    {
        cout << a - (b - a) << endl;
    }
    return 0;
}