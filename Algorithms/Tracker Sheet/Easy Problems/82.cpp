#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t, m = 1;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        ll num1 = 0, num2 = 0;
        ll arr1[4];
        ll arr2[4];
        int k = 0, l = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '.')
            {
                k++;
                num1 = 0;
            }
            else
            {

                int digit = int(x[i]) - '0';
                num1 = num1 * 10 + digit;
                arr1[k] = num1;
            }
        }
        for (int i = 0; i < y.size(); i++)
        {
            if (y[i] == '.')
            {
                l++;
                num2 = 0;
            }
            else
            {

                int digit = int(y[i]) - '0';
                num2 = num2 * 2 + digit;
                arr2[l] = num2;
            }
        }
        bool ans = true;
        for (int i = 0; i < 4; i++)
        {
            if (arr1[i] != arr2[i])
            {
                ans = false;
            }
        }
        if (ans)
        {
            cout << "Case " << m++ << ": "
                 << "Yes" << endl;
        }
        else
        {
            cout << "Case " << m++ << ": "
                 << "No" << endl;
        }
    }
    return 0;
}