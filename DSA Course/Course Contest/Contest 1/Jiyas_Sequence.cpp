#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  a, b, c, n;
    cin >> a;
    while (a--)
    {
        cin >> b;
    long long product=1;
        for(int i=0; i<b; i++)
        {
            cin >> n;
            product = product * n;
        }
        c = product % 10;
        if (c == 2 || c == 3 || c == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}