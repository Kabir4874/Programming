#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, x;
    cin >> n >> x;
    int count = 0;
    while (n > 0)
    {
        n /= x;
        count++;
    }
    cout << count << endl;
    return 0;
}