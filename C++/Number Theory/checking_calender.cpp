#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> days = {"saturday", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday"};
    string a, b;
    cin >> a >> b;
    int x, y;
    for (int i = 0; i < 7; i++)
    {
        if (days[i] == a)
        {
            x = i;
        }
        if (days[i] == b)
        {
            y = i;
        }
    }
    if ((x + 28) % 7 == y || (x + 30) % 7 == y || (x + 31) % 7 == y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}