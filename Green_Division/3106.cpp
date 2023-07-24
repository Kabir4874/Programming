#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    int sum1 = 0, sum2 = 0;
    while (t--)
    {
        cin >> n;
        sum1 += n;
        sum2 += n % 3;
    }
    cout << sum1 - sum2 << endl;
    return 0;
}