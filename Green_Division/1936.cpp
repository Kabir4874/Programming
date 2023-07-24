#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    int fac[] = {40320, 5040, 720, 120, 24, 6, 2, 1};
    cin >> n;
    int k = 0;
    for (int i = 0; i < 8; i++)
    {
        k += n / fac[i];
        n %= fac[i];
    }
    cout << k << endl;
    return 0;
}