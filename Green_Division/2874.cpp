#include <bits/stdc++.h>
using namespace std;
int converter(long long int n)
{
    int d = 0, b = 1;
    while (n)
    {
        int ld = n % 10;
        n /= 10;
        d += ld * b;
        b *= 2;
    }
    return d;
}
int main()
{
    int t;
    while (cin >> t)
    {
        long long int n[t];
        for (int i = 0; i < t; i++)
        {
            cin >> n[i];
        }
        for (int i = 0; i < t; i++)
        {
            printf("%c", converter(n[i]));
        }
        cout << endl;
    }
    return 0;
}