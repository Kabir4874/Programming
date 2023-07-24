#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a < b)
        {
            cout << "REPAIR" << endl;
        }
        else if (b < a)
        {
            cout << "NEW PHONE" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}