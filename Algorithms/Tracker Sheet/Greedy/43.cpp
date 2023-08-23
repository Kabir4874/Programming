#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        int temp = n % 10;
        if (temp != 0)
        {
            n--;
        }
        else if (temp == 0)
        {
            n /= 10;
        }
    }
    cout << n << endl;
    return 0;
}