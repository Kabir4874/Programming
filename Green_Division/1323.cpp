#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        long long int k = (n * (n + 1) * (2 * n + 1)) / 6;
        cout << k << endl;
    }
    return 0;
}