#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '8')
        {
            count++;
        }
    }
    int x = n / 11;
    if (count >= x)
    {
        cout << x << endl;
    }
    else if (count < x && n > 11)
    {
        cout << count << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}