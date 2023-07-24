#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, min, max;
    while (cin >> n >> min >> max)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            if (k >= min && k <= max)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}