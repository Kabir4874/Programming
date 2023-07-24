#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count1 = 0, count2 = 0;
    int x = 0, y = 0;
    while (1)
    {
        string s;
        cin >> s;
        if (s == "ABEND")
        {
            break;
        }
        cin >> n;
        if (s == "SALIDA")
        {
            count1++;
            x += n;
        }
        if (s == "VUELTA")
        {
            count2++;
            y += n;
        }
    }
    int ans1 = count1 - count2;
    int ans2 = x - y;
    cout << ans2 << endl
         << ans1 << endl;

    return 0;
}