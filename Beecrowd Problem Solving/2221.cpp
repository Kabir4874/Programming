#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a1, b1, c1, a2, b2, c2, bonus1 = 0, bonus2 = 0;
        double value1, value2;
        cin >> n;
        cin >> a1 >> b1 >> c1;
        cin >> a2 >> b2 >> c2;
        value1 = (a1 + b1) / 2.0;
        value2 = (a2 + b2) / 2.0;
        if (c1 % 2 == 0)
        {
            bonus1 += n;
        }
        value1 += bonus1;
        if (c2 % 2 == 0)
        {
            bonus2 += n;
        }
        value2 += bonus2;
        if (value1 > value2)
        {
            cout << "Dabriel" << endl;
        }
        else if (value1 == value2)
        {
            cout << "Empate" << endl;
        }
        else
        {
            cout << "Guarte" << endl;
        }
    }
    return 0;
}