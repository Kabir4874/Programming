#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 1;
    int count = 1;
    if (n == 2)
    {
        sum = n * n + 1;
    }
    for (int i = 3; i <= n; i++)
    {
        sum = (n * n) + 1 + count * n;
        count++;
    }
    cout << sum << endl;

    return 0;
}