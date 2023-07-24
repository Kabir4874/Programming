#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            k += b / 2;
        }
        cout << k / 2 << endl;
    }
    return 0;
}