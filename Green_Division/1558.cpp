#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while (cin >> n)
    {
        int count = 0, k, l, i = 0;
        k = sqrt(n);
        while (k >= i)
        {
            l = i * i + k * k;
            if (l == n)
            {
                count = 1;
                break;
            }
            else if (l < n)
            {
                i++;
            }
            else
            {
                k--;
            }
        }

        if (count == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}